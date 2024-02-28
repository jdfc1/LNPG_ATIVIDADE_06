package Algoritmo_2;

import java.util.Scanner;

public class Pi {

    static double potencia(int base, int expoente) {
        return Math.pow(base, expoente);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int s;
        double somador = 0;
        double auxiliar = 0;
        double num = 1;
        int expoente = 3;

        System.out.print("Digite um número inteiro: ");
        s = scanner.nextInt();

        double numerador = 1;
        double denominador = 1;

        for (int i = 1; i <= s; i++) {
            auxiliar = (numerador / potencia((int)denominador, expoente)) * num;

            num *= -1;
            denominador += 2;
            somador += auxiliar;
        }

        System.out.printf("%.5f\n", somador);
    }
}
