import Data.Char
import Text.Printf

data KeyEntry =
	KeyKeyboard { modifier :: String, keycode :: String } |
	KeyMultimedia { keycode :: String } |
	KeyNone deriving (Show) 

page KeyNone           = 0
page (KeyKeyboard _ _) = 1
page (KeyMultimedia _) = 2

code_mod KeyNone = "0"
code_mod (KeyKeyboard m _) = m
code_mod (KeyMultimedia k) = "0" -- multimedia keys don't have modifiers

code_key KeyNone = "0 /* unused */"
code_key (KeyKeyboard _ k) = "KEY_" ++ k
code_key (KeyMultimedia k) = "MULT_" ++ k

fromChar c = KeyKeyboard "0" ("KEY_" ++ c)

keyline n entry = "/* " ++  (printf "%3d" n) ++ " */   {" ++ (show (page entry)) ++ ", " ++ (code_mod entry) ++ ", " ++ (code_key entry) ++ "}"



-- actual generation (change stuff here if you want a different list) --

readable_keys = ['A'..'Z'] ++ ['0'..'9']
non_readable_keys = [(ord '\b', "BACKSPACE"),
					 (ord '\n', "ENTER"),
					 (27, "ESCAPE"),
					 (ord '+', "PLUS"),
					 (ord '-', "MINUS"),
					 (ord ' ', "SPACE")]

non_ascii_keys = 
	[ KeyKeyboard "0" "PAUSE"
	, KeyKeyboard "0" "PAGE_UP"
	, KeyKeyboard "0" "PAGE_DOWn"
	, KeyKeyboard "0" "CUR_RIGHT"
	, KeyKeyboard "0" "CUR_LEFT"
	, KeyKeyboard "0" "CUR_DOWN"
	, KeyKeyboard "0" "CUR_UP"
	, KeyKeyboard "0" "STOP"
	, KeyMultimedia "MUTE" ]
	++ (map (\ i -> KeyKeyboard "0" ("F" ++ (show i))) [1..12])

-- now sort these according to their ASCII code (if any, otherwise just insert it at an unused ASCII code)

ascii_keys = non_readable_keys ++ (map (\ c -> (ord c, [c])) readable_keys)

num_keys = max ((length ascii_keys) + (length non_ascii_keys)) (maximum (map fst ascii_keys))

keylines i non_ascii = case (lookup i ascii_keys) of
		Just k  -> [ keyline i (fromChar k) ]     ++ (keylines (i+1) non_ascii)
		Nothing -> case non_ascii of
					[] -> if i > maximum (map fst ascii_keys) then [] else [ keyline i KeyNone ] ++ keylines (i+1) []
					_  -> [ keyline i (head non_ascii) ] ++ (keylines (i+1) (tail non_ascii))

main = do
	putStrLn (foldl1 (\ l r -> l ++ ",\n" ++ r) (keylines 1 non_ascii_keys))
