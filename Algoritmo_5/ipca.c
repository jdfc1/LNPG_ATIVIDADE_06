#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

    char linha[50];
    char dados0[50];
    char dados1[50];

    int ano, mes;
    float ipca = 0.0;
    // ✌
    float maiorIpca = 0.0;
    float menorIpca = 999999;
    float soma = 0.0;
    int cont = 0;
    float mediaIpca;

    while (1){

        fgets(linha, 50, stdin);
        if (linha[0] == '*') break;

        sscanf(linha, "%d %d %f", &ano, &mes, &ipca);
        
        cont++; // para fazer a média
        soma += ipca;

        if (ipca >= maiorIpca) {
            maiorIpca = ipca;
            sprintf(dados0, "no mes de %d / %d ", mes, ano);
        }

        if (ipca <= menorIpca) {
            menorIpca = ipca;
            sprintf(dados1, "no mes de %d / %d ", mes, ano);
            
        }

    }

    mediaIpca = soma / cont;
    printf("O menor IPCA foi de: %.2f - %s.\n", menorIpca, dados1);
    printf("O maior IPCA foi de: %.2f - %s.\n", maiorIpca, dados0);
    printf("A média do ipca foi de: %.2f \n", mediaIpca);




















/* 
    float indice2024 = 4.49;
    float indice2023 = 4.62;
    float indice2022 = 4.51;
    float indice2021 = 3.23;

    float valor = 3000.0;

    int mesInicio = 2;
    int anoInicio = 2021;

    int mesFinal = 8;
    int anoFinal = 2023;

    float valorCorrigidoFinal = valorCorrigido(valor, indice2021, indice2024);

    printf("O valor corrigido pela inflação de R$ %.2f em %d/%d para %d/%d é R$ %.2f\n",
           valor, mesInicio, anoInicio, mesFinal, anoFinal, valorCorrigidoFinal);

    return 0;
 */
}