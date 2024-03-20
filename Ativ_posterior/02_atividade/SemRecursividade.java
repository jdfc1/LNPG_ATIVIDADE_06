import java.util.Scanner;

public class SemRecursividade {

public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Digite um número inteiro positivo: ");
    int n = scanner.nextInt();
    long inicio = System.currentTimeMillis();

    long soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    
    long fim = System.currentTimeMillis();
    System.out.println("A soma dos números de 1 a " + n + " é: " + soma);

    long tempoDecorrido = fim - inicio;
    System.out.println("Duração: " + tempoDecorrido + "ms" ); 

    scanner.close();
}

}