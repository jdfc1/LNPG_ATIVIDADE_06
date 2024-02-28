package Algoritmo_3;

import java.util.Scanner;

public class VendasCatarina {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int jogosVendidos;
        float valorJogos = 19.90f;

        float valorTotalVendas = 0.0f;
        float valorBonus = 0.0f;
        float valorMensalRecebido = 0.0f;
        float acimaVendas = 0.0f;

        System.out.println("Digite quantas vendas foram feitas?");
        jogosVendidos = scanner.nextInt();

        for (int i = 0; i < jogosVendidos; i++) {
            valorTotalVendas += valorJogos;

            if (jogosVendidos >= 15) {
                acimaVendas = valorTotalVendas * 0.08f;
            }
        }

        valorBonus = valorTotalVendas / 2;
        valorMensalRecebido = valorBonus + acimaVendas;


        System.out.printf("R$ %.2f é o valor Total Arrecadado.\n", valorTotalVendas);
        System.out.printf("R$ %.2f é o valor Total em Bonus.\n", valorBonus);
        System.out.printf("R$ %.2f é o valor que Catarina recebeu no mês.\n", valorMensalRecebido);
    }
}
