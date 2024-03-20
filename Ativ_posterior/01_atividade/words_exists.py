def how_much_letters(show): 
    return len(show)

def how_much_words(show):
    words = show.split()
    return len(words)

def more_caracters(show):
    words = show.split()
    long_word = max(words, key=len)
    return long_word

def more_vogais(show):

    vogais = "aeiou"

    contagem_vogais = {vogal: show.count(vogal) 
                        for vogal in vogais}

    vogal_mais_comum = max(contagem_vogais, key=contagem_vogais.get)
    
    return vogal_mais_comum

def literal(show):

    linhas = show.split('\n')
    search = 'ção'

    for i, linha in enumerate(linhas, start=1):
        if search in linha:
            return i 
            break

