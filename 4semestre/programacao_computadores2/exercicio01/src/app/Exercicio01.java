package app;

import java.io.IOException;
import java.util.Scanner;
import model.ContaCorrente;
import services.ContaCorrenteService;
import view.TabelaContas;

public class Exercicio01 {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        ContaCorrenteService service = new ContaCorrenteService();
        
        service.carregarDados();
        
        TabelaContas menu = new TabelaContas(service);
        menu.setVisible(true);
        
        
        /* int opcao;

        do {
            System.out.println("\n===== MENU =====");
            System.out.println("1 - Adicionar conta");
            System.out.println("2 - Buscar conta");
            System.out.println("3 - Atualizar conta");
            System.out.println("4 - Remover conta");
            System.out.println("5 - Listar contas");
            System.out.println("6 - Sacar");
            System.out.println("7 - Depositar");
            System.out.println("0 - Sair");
            System.out.print("Opção: ");

            opcao = sc.nextInt();

            switch (opcao) {

                case 1:
                    System.out.print("Número: ");
                    int numero = sc.nextInt();

                    sc.nextLine(); 

                    System.out.print("Titular: ");
                    String titular = sc.nextLine();

                    System.out.print("Saldo: ");
                    double saldo = sc.nextDouble();

                    service.adicionarConta(new ContaCorrente(numero, titular, saldo));
                    break;

                case 2:
                    System.out.print("Número da conta: ");
                    service.buscarConta(sc.nextInt());
                    break;

                case 3:
                    System.out.print("Número da conta: ");
                    numero = sc.nextInt();

                    sc.nextLine();

                    System.out.print("Novo titular: ");
                    titular = sc.nextLine();

                    System.out.print("Novo saldo: ");
                    saldo = sc.nextDouble();

                    service.atualizarConta(numero, new ContaCorrente(numero, titular, saldo));
                    break;

                case 4:
                    System.out.print("Número da conta: ");
                    service.removerConta(sc.nextInt());
                    break;

                case 5:
                    service.listarContas();
                    break;
                    
                case 6:
                    System.out.print("Número da conta: ");
                    numero = sc.nextInt();
                    
                    System.out.print("Valor do saque: ");
                    double valorSaque = sc.nextDouble();
                   
                    service.sacar(numero, valorSaque); 
                    break;
                    
                case 7:
                    System.out.print("Número da conta: ");
                    numero = sc.nextInt();
                    
                    System.out.print("Valor do depósito: ");
                    double valorDeposito = sc.nextDouble();
                    
                    // Supõe que este método exista na classe ContaCorrenteService
                    service.depositar(numero, valorDeposito); 
                    break;
                    
                case 0:
                    System.out.println("Programa encerrado.");
                    break;

                default:
                    System.out.println("Opção inválida.");
            }

        } while (opcao != 0);

        sc.close();
        */
    }     
}


/*boolean saqueRealizado = false;;
        do {
            try {
                // Solicite ao usuário um valor para saque
                System.out.print("Insira um valor para sacar: ");
                double valorSaque = scanner.nextDouble();

                conta.sacar(valorSaque);
                saqueRealizado = true;
            } catch (SaldoInsuficienteException e) {
                System.out.println(e.getMessage());
            } catch (ValorNegativoException e) {
                System.out.println(e.getMessage());
            }
        } while (!saqueRealizado);
*/