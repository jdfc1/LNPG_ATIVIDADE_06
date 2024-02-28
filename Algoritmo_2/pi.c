#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double potencia(int base, int expoente) {
    return pow(base, expoente);
}

int main() {

    int s; 
    double somador = 0;
    double auxiliar = 0;
    double num = 1;
    int expoente = 3;

    scanf("%d",&s);

    double numerador = 1; // + 1
    double denominador = 1; // x * 2 + 1 = y

    for (int i = 1; i <= s; i++) {
        auxiliar = (numerador / potencia(denominador, expoente)) * num;

        num = num * (-1);
        denominador = denominador + 2;
        somador = somador + auxiliar;
    }   

    printf("%.5f\n", somador);

    return 0;
}