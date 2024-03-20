#include <stdio.h>

float somar(float num1, float num2) {
    return num1 + num2;
}
float subtrair(float num1, float num2) {
    return num1 - num2;
}

float multiplicar(float num1, float num2) {
    return num1 * num2;
}

float dividir(float num1, float num2) {
    return num1/num2;
}

float ehDivisaoValida(float num1, float num2) {
    if (num2 != 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    char operador;
    float num1, num2, resultado;

    printf("Digite a operação (+, -, *, /): ");

    scanf("%c", &operador);

    printf("digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("digite o segundo numero: ");
    scanf("%f", &num2);

    switch(operador) {
        case '+':
            printf("a soma dos resultados é %.2f\n", somar(num1, num2));
            break;
        case '-':
            printf("a subtração dos resultados é %.2f\n", subtrair(num1, num2));
            break;
        case '*':
            printf("a multiplicação dos resultados é %.2f\n", multiplicar(num1, num2));
            break;
        case '/':
            if (ehDivisaoValida(num1, num2)){
                printf("a divisão dos resultados é %.2f\n", dividir(num1, num2));
            } else {
                printf("Erro! Divisão por zero.\n");
            } 
            break;
        default:
        printf("Operador inválido.\n");
    }
    return 0;
}