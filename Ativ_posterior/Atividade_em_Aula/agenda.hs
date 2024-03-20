import Data.List

-- Definição de tipos
type Evento = String
type Agenda = [Evento]

-- Função principal
main :: IO ()
main = do
    putStrLn "Bem-vindo ao Gerenciador de Agenda!"
    loop []

-- Função de loop para interação com o usuário
loop :: Agenda -> IO ()
loop agenda = do
    putStrLn "\nSelecione uma opção:"
    putStrLn "1. Adicionar evento"
    putStrLn "2. Remover evento"
    putStrLn "3. Visualizar agenda"
    putStrLn "4. Sair"
    opcao <- getLine
    case opcao of
        "1" -> adicionarEvento agenda
        "2" -> removerEvento agenda
        "3" -> visualizarAgenda agenda
        "4" -> putStrLn "Saindo do programa..."
            -> do
            putStrLn "Opção inválida. Tente novamente."
            loop agenda

-- Função para adicionar um evento à agenda
adicionarEvento :: Agenda -> IO ()
adicionarEvento agenda = do
    putStrLn "Digite o evento a ser adicionado:"
    evento <- getLine
    let novaAgenda = agenda ++ [evento]
    loop novaAgenda

-- Função para remover um evento da agenda
removerEvento :: Agenda -> IO ()
removerEvento agenda = do
    putStrLn "Digite o índice do evento a ser removido:"
    indice <- getLine
    let index = read indice
        novaAgenda = delete (agenda !! index) agenda
    loop novaAgenda

-- Função para visualizar a agenda
visualizarAgenda :: Agenda -> IO ()
visualizarAgenda agenda = do
    putStrLn "Eventos na Agenda:"
    mapM_ putStrLn agenda
    loop agenda
