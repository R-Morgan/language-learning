import Data.Character

main = do
    putStrLn "What's your first name?"
    firstname <- getLine
    putStrLn "What's your last name?"
    lastname <-  getLine
    let bigfirst = map toUpper firstname
        biglast  = map toUpper lastname
    putStrLn $ "Hiya" ++ bigfirst ++ biglast ++ ", how're things?"
