import java.util.Scanner;

public class SomaNumeros {

    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite um número inteiro positivo: ");
        int n = scanner.nextInt();
        
        long inicio = System.currentTimeMillis();
        long soma = somaNum(n);
        
        System.out.println("A soma dos números de 1 a " + n + " é: " + soma);
        long fim = System.currentTimeMillis();
        
        long tempoDecorrido = fim - inicio;
        
        System.out.println("inicio: " + inicio + " fim: " + fim + " Duração: " + tempoDecorrido);

        scanner.close();
    }


    public static long somaNum(int n) {

        if (n == 1) {
            return 1;
        }else {
            return n + somaNum(n-1);
        }
    }



}

/* 

O Java tem um limite para a quantidade de chamadas de função que podem ser
empilhadas antes de ocorrer um estouro de pilha. Esse limite é definido pelo
tamanho disponível da pilha de chamadas de função. Quando esse limite é
atingido, ocorre um estouro de pilha e a execução do programa é interrompida.

Para evitar esse problema ao usar valores muito grandes para n, você pode
considerar outras abordagens de implementação, como uma abordagem iterativa
em vez de recursiva. Isso porque a abordagem recursiva pode não ser eficiente
para valores muito grandes e pode levar a estouros de pilha.

*/
