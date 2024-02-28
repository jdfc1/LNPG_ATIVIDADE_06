potencia :: Double -> Double -> Double
potencia base expoente = base ** expoente

main :: IO ()
main = do
    putStrLn "Digite um número inteiro: "
    s <- readLn
    let expoente = 3
    let numerador = 1
    let denominador = 1
    let somador = sum [ (numerador / potencia denominador (fromIntegral expoente)) * num | i <- [1..s] ]
          where num = if odd i then 1 else -1
                denominador = 1 + 2 * (fromIntegral i)
    putStrLn $ show somador
