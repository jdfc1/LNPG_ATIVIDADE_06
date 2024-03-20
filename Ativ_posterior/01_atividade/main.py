import words_exists

try: 
    with open('/home/douglas/Documentos/dados/codigos/jdfc1/Atividade_6_March/01_atividade/arquivodetexto.txt', 'r', encoding='utf-8') as file:
        show = file.read()

        qtd = words_exists.how_much_letters(show)
        qtd2 = words_exists.how_much_words(show)
        qtd3 = words_exists.more_caracters(show)
        qtd4 = words_exists.more_vogais(show)
        qtd5 = words_exists.literal(show)

        print ("quantidade de letras -", qtd)
        print ("quantidade de palavras -", qtd2)
        print ("maior Caracter -", qtd3)
        print ("vogal mais frequente -", qtd4)
        print ("primeira linah do ção -", qtd5)

except FileNotFoundError:
            print("Arquivo não foi encontrado.")