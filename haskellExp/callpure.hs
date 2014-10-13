-- file: ch07/callingpure.hs
name2reply :: String -> String
name2reply name =
    "Pleased to meet you, " ++ name ++ ".\n" ++
    "Your name contains " ++ charcount ++ " characters."
    where charcount = show (length name)

main = do
    putStrLn "Hi there! What is your name?"
    inputStr <- getLine
    let outStr = name2reply inputStr
    putStrLn outStr 

