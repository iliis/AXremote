#!/bin/env python

import matplotlib.pyplot as p
import math


def wtimer_to_ms(wt):
    # wtimer1 runs with 10'000 cycles per ms
    return float(wt) / 10000

def average(l):
    return sum(l)/float(len(l))

def bucketize(data):

    data.sort()
    last = data[0]

    buckets = []
    cur_bucket = []
    for d in data:
        if len(cur_bucket) > 0:
            cur_avg = sum(cur_bucket)/float(len(cur_bucket))
            if abs(d/cur_avg-1) > 0.1: #0.05: # 10%
                buckets.append(cur_bucket)
                cur_bucket = [d]
                continue
        # otherwise
        cur_bucket.append(d)


    buckets.append(cur_bucket)

    print "found", len(buckets), "buckets:"
    for b in buckets:
        avg = average(b)
        dev = math.sqrt( average( map( lambda x : (x - avg) ** 2, b ) ) )
        print len(b),"samples with average",avg,"ms and stddev of",dev




print "paste data into here, ending with an empty line"

raw_data = []

l = raw_input()
while l:
    raw_data.append(l)
    l = raw_input()

raw_data = [ wtimer_to_ms(int(d)) for d in raw_data ]

state = 1
time = 0
# prepend some SPACE for more intuitive visualization
data_state = [0,   0,    state]
data_times = [-10, time, time]
for d in raw_data:
    time = time + d
    data_times.append(time)
    data_state.append(state)
    state = 1-state
    data_times.append(time)
    data_state.append(state)

data_times.append(time+10)
data_state.append(state)

state_1 = raw_data[0::1] # get every 2nd item
state_0 = raw_data[1::1] # every 2nd, starting with 2nd

print "all data:"
bucketize(raw_data)

print "state 1:"
bucketize(state_1)

print "state 0:"
bucketize(state_0)

p.ylim(-1,2)
p.plot(data_times, data_state)
p.xlabel("ms")
p.show()

