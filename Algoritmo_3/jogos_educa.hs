import Text.Printf

main :: IO ()
main = do
    putStrLn "Digite quantas vendas foram feitas?"
    jogosVendidos <- readLn
    let valorJogos = 19.90
        valorTotalVendas = jogosVendidos * valorJogos
        acimaVendas = if jogosVendidos >= 15 then valorTotalVendas * 0.08 else 0
        valorBonus = valorTotalVendas / 2
        valorMensalRecebido = valorBonus + acimaVendas
    printf "R$ %.2f é o valor Total Arrecadado.\n" (valorTotalVendas :: Float)
    printf "R$ %.2f é o valor Total em Bonus.\n" (valorBonus :: Float)
    printf "R$ %.2f é o valor que Catarina recebeu no mês.\n" (valorMensalRecebido :: Float)
