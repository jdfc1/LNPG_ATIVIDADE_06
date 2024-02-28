package Algoritmo_5;

import java.util.Scanner;

public class Ipca {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int cont = 0;
        float maiorIpca = 0.0f;
        float menorIpca = 999999.0f;
        float soma = 0.0f;
        int anoMenor = 0, mesMenor = 0;
        int anoMaior = 0, mesMaior = 0;

        while (true) {
            String linha = scanner.nextLine();
            if (linha.equals("*")) break;

            String[] dados = linha.split(" ");
            int ano = Integer.parseInt(dados[0]);
            int mes = Integer.parseInt(dados[1]);
            float ipca = Float.parseFloat(dados[2]);

            cont++;
            soma += ipca;

            if (ipca >= maiorIpca) {
                maiorIpca = ipca;
                anoMaior = ano;
                mesMaior = mes;
            }

            if (ipca <= menorIpca) {
                menorIpca = ipca;
                anoMenor = ano;
                mesMenor = mes;
            }
        }

        float mediaIpca = soma / cont;
        System.out.printf("O menor IPCA foi de: %.2f - no mes de %d / %d\n", menorIpca, mesMenor, anoMenor);
        System.out.printf("O maior IPCA foi de: %.2f - no mes de %d / %d\n", maiorIpca, mesMaior, anoMaior);
        System.out.printf("A média do IPCA foi de: %.2f\n", mediaIpca);
    }
}
