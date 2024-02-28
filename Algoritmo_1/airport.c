#include <stdio.h>
#include <stdlib.h>
#include <string.h> // para usar string
#include <locale.h> // permitir strings characteres

int main () {

    int nPassageiros;
    printf("digite o número de passageiros: ");
    scanf("%d", &nPassageiros);

    int valor=0;
    char rg[8];
    int naoPossuiRg=0;

    for (int i = 1; i <= nPassageiros; i++) {
        printf("passageiro número %d possui RG? 1 para sim, 2 para não:", i);
        scanf("%d",&valor);
        if (valor == 1) {
            printf("digite número do RG do passageiro %d ",i);
            fgets(rg, sizeof(rg), stdin);
            int tamanhoRG = strlen(rg);

            if(tamanhoRG-2 >= 7){
                printf("6 caracteres. RG Correto");
            }
            else {
                printf("maior que 6 caracteres. RG Incorreto\n ");
            }

        }else{
            naoPossuiRg++;
        }

    }
    


    printf("%d pessoas não possuem RG \n",naoPossuiRg);



    // informações que eu tenho do usuário.
    
    /* 
    int rg = 123456;
    int rgDigitada; 
    char dataNascimento[20] = {"01/01/2024"};
    char dataNascimentoDigitada[20];

    printf("digite a data de nascimento que vc encontrou no passaporte");
    fgets(dataNascimentoDigitada, sizeof(dataNascimentoDigitada), stdin);
    int tamanho = strlen(dataNascimentoDigitada);

    if (dataNascimentoDigitada[tamanho - 1] == '\n') { // Remover o letra de nova linha do final da string
        dataNascimentoDigitada[tamanho - 1] = '\0';    // nulo
        tamanho--; // for 
    }


    printf("digite a RG para comparar");
    scanf("%d",&rgDigitada);

    if (rg == rgDigitada) {
        printf("a RG é igual a do registro:\n ");
    }else{
        printf("a RG não confere registro:\n ");
    }

    int contGood; 

    // saber se a data digitada é igual a data inicial
    for (int i = 0; i < tamanho; i++){
        if (dataNascimentoDigitada[i] != dataNascimento[i]) {
            break;
        }
        else{
            contGood++;
        }

    }

    if (contGood >= 10) {
        printf("Data Correta\n");
    }
    else {
        printf("Data Incorreta\n");
    } 
    
    */



}