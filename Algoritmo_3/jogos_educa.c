/* 

Catarina trabalha na empresa Kids Play e vende jogos educativos
de porta em porta. Cada jogo custa R$ 19.90 e ela recebe como 
salário 50% do valor total de suas vendas no mês. Além disso, a
cada 15 jogos vendidos, ela recebe um bônus de 8% do total de vendas.

Escreva um programa que receba como entrada a quantidade de jogos
vendidos esse mês por Catarina e exiba três valores: o valor
total arrecadado em vendas, o valor ganho como bônus, e o valor
total que Catarina receberá no mês.
(in)
Um valor inteiro
(out)
Três números reais, cada um com duas casas decimais
Os valores devem ser separados por quebras de linha (ou seja,
cada valor deve ser exibido em uma linha diferente)
 */

#include <stdio.h>

int main() {
    
    int jogos_vendidos;
    float valor_jogos = 19.90;

    // quero saber;
    float valor_total_vendas=0.0;
    float valor_bonus=0.0;
    float valor_mensal_recebido=0.0;
    float acima_vendas=0.0;

    printf("digite quantas vendas foram feitas?\n");
    scanf("%d",&jogos_vendidos);


    for (int i = 0; i < jogos_vendidos; i++) {
        valor_total_vendas += valor_jogos;
        
        if (jogos_vendidos >= 15) {
            acima_vendas = valor_total_vendas * 0.08;
        }

    }
    valor_bonus = valor_total_vendas / 2;

    printf("R$ %.2f é o valor Total Arrecadado.\n", valor_total_vendas);
    printf("R$ %.2f é o valor Total em Bonus.\n", valor_bonus);
    printf("R$ %.2f é o valor que Catarina recebeu no mês.\n", valor_bonus + acima_vendas);


}