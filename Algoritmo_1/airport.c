#include <stdio.h>
#include <stdlib.h>
#include <string.h> // para usar string
#include <locale.h> // permitir strings characteres

int main() {
    int n;
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {    
        char rg[10], passagem[10], dataNascimentoRG[11], dataNascimentoPassagem[11], assento[4];
        // Entrada de dados
        scanf("%s %s %s %s %s", rg, dataNascimentoRG, passagem, dataNascimentoPassagem, assento);
        
        // Verifica se o passageiro possui RG
        if (strcmp(rg, "Nao") == 0) {
            printf("a saida e nessa direcao\n");
            continue;
        }
        
        // Verifica se o passageiro possui passagem
        if (strcmp(passagem, "Nao") == 0) {
            printf("a recepcao e nessa direcao\n");
            continue;
        }
        
        // Verifica se as datas de nascimento são iguais
        if (strcmp(dataNascimentoRG, dataNascimentoPassagem) != 0) {
            printf("190\n");
            continue;
        }
        
        // Caso todas as condições anteriores não se apliquem
        printf("o seu assento e %s tenha um otimo dia\n", assento);
    }
    
    return 0;
}


/* 
Descrição
você é um segurança com uma lista checagem, o seu trabalho é checar cada um do passageiros e ver se eles tem
RG;
Passagem
Após isso você deve checar se as datas de nascimento no RG e na passagem são iguais, qual é o assento do passageiro e informa-lo qual é o seu assento
se o passageiro não tiver um RG ele deve ser direcionado para a saída;
se o passageiro não tiver uma passagem ele deve ser direcionado para a recepção do aeroporto;
se a data de nascimento do RG e da Passagem não baterem você deve chamar a policia. 
Formato de entrada
um número inteiro positivo N, que representa a quantidade de passageiros;
uma String com o valor "RG" ou "Nao possui" para indicar se a pessoa possui ou não RG;
uma String no formato "DD/MM/AAAA" indicando a data de nascimento do RG;
uma String com o valor "Passagem" ou "Nao possui" para indicar se a pessoa possui ou não Passagem;
uma String no formato "DD/MM/AAAA" indicando a data de nascimento da Passagem;
uma String no formato "A12" indicando a cadeira do passageiro.
Formato de saída
caso o passageiro não tenha RG a saída deve ser "a saída é nessa direção";
caso o passageiro não tenha Passagem a saída deve ser "a recepção é nessa direção";
caso as datas de nascimento não sejam iguais a saída deve ser "190";
caso todos os anteriores não aconteção a saída deve ser "o seu assento é" seguido do assento do passageiro e depois " tenha um ótimo dia".
 */