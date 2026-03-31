package prova01_sistemaVeiculos;

import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner input = new Scanner(System.in);
        SistemaVeiculos sistema = new SistemaVeiculos(input);
        int escolha = 0;

        do {
            System.out.println("\n1 - Cadastrar Carro");
            System.out.println("2 - Cadastrar Moto");
            System.out.println("3 - Listar Carro");
            System.out.println("4 - Listar Moto");
            System.out.println("5 - Atualizar Carro");
            System.out.println("6 - Atualizar Moto");
            System.out.println("7 - Remover Carro");
            System.out.println("8 - Remover Moto");
            System.out.println("0 - Sair");
            System.out.println("\nEscolha uma opcao: ");
            escolha = input.nextInt();
            input.nextLine();

            switch (escolha) {
                case 1:
                    sistema.cadastrarCarro();
                    break;
                case 2:
                    sistema.cadastrarMoto();
                    break;
                case 3:
                    sistema.listarCarros();
                    break;
                case 4:
                    sistema.listarMotos();
                    break;
                case 5:
                    sistema.atualizarCarro();
                    break;
                case 6:
                    sistema.atualizarMotos();
                    break;
                case 7:
                    sistema.removerCarro();
                    break;
                case 8:
                    sistema.removerMoto();
                    break;
                case 0:
                    System.out.println("\nVolte Sempre!\n");
                    break;
                default:
                    System.out.println("\nOpcao Invalida, Tente Novamente.\n");
                    break;
            }
        } while (escolha != 0);

        input.close();
    }
}