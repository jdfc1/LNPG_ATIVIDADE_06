import java.util.Scanner;

public class CaixaEletronico {

    static double saldo = 1000.00;

    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);
        int opcao;
        double valor;

        CaixaEletronico.printMenu();
        opcao = scanner.nextInt();

        if (opcao == 1) {
            valor = pedirValor(opcao);
            if (valor > saldo){
                System.out.println("Saldo insuficiente.");
            }
            else{
                CaixaEletronico.sacar(valor);
                System.out.println("Saque de R$"+valor + "realizado.");
            }
        }
        else if (opcao == 2) {
            valor = pedirValor(opcao);
            System.out.println("Deposito de R$ " + valor + " realizado.");
        }
        else if (opcao == 3) {
            CaixaEletronico.mostrarSaldo();
        }
        else {
            System.out.println("Opção Inválida");
        }

        scanner.close();

    }

   public static void printMenu(){
        System.out.println("Bem-vindo ao Caixa Eletrônico");
        System.out.println("Seu saldo atual é: R$" + CaixaEletronico.saldo);
        System.out.println("Escolha uma opção:");
        System.out.println("1 - Saque");
        System.out.println("2 - Depósito");
        System.out.println("3 - Consultar Saldo:");
    }

    public static double pedirValor(int opcao){
        Scanner scanner = new Scanner(System.in);
        
        if (opcao == 1) {
            System.out.println("Digite o valor do saque:");
        }
        else if (opcao == 2) {
            System.out.println("Digite o valor do depósito:");
        }
        double valor = scanner.nextDouble();

        return valor;
    }

    public static void sacar(double valor){     
        
        CaixaEletronico.saldo -= valor;
        
    }

    public static void depositar(double valor){     
        
        CaixaEletronico.saldo += valor;
        
    }

    public static void mostrarSaldo(){     
        
        System.out.println("Seu saldo atual é: R$" + CaixaEletronico.saldo);
        
    }

}


