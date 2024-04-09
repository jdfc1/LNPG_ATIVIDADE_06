import Text.Printf

main :: IO ()
main = loop 0 0 999999 0 0 0.0

loop :: Int -> Float -> Float -> Float -> Int -> Int -> IO ()
loop cont maior menor soma ano mes = do
    linha <- getLine
    if linha == "*" then do
        let mediaIpca = soma / fromIntegral cont
        printf "O menor IPCA foi de: %.2f - no mes de %d / %d\n" menor mes ano
        printf "O maior IPCA foi de: %.2f - no mes de %d / %d\n" maior mes ano
        printf "A média do IPCA foi de: %.2f\n" mediaIpca
    else do
        let [ano', mes', ipca'] = map read (words linha)
        let (maior', menor', soma') = if ipca' >= maior
                                      then (ipca', menor, soma + ipca')
                                      else (maior, ipca', soma + ipca')
        loop (cont + 1) maior' menor' soma' ano' mes'

