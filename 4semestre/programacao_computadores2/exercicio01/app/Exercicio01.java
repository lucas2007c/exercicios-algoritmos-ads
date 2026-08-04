package app;

import exception.SaldoInsuficienteException;
import exception.ValorNegativoException;
import java.io.IOException;
import java.nio.file.*;
import java.util.Scanner;
import model.ContaCorrente;

public class Exercicio01 {

    public static void main(String[] args) throws IOException {
        // Leia os dados de uma conta do arquivo conta.txt 
        Scanner scanner = new Scanner(System.in);

        Path caminhoEntrada = Paths.get("src/txt/conta.txt");
        Path caminhoSaida = Paths.get("src/txt/conta_atualizada.txt");
        
        String conteudo = Files.readString(caminhoEntrada);
        
        // Crie o objeto ContaCorrente com esses dados
        String[] atributos = conteudo.split(",");

        int numero = Integer.parseInt(atributos[0]);
        String titular = atributos[1];
        double saldo = Double.parseDouble(atributos[2]);

        ContaCorrente conta = new ContaCorrente(numero, titular, saldo);

        conta.imprimirDados();
        System.out.print("\n");
        
        // Tente realizar o saque, tratando exceção e exibindo mensagem adequada
        boolean saqueRealizado = false;
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
        
        // Grave os dados atualizados no arquivo conta_atualizada.txt
        String dadosAtualizados = conta.numero + "," + conta.titular + "," + conta.saldo;

        Files.writeString(caminhoSaida, dadosAtualizados);
        System.out.println("\nDados atualizados salvos no arquivo.\n");

        scanner.close();
    }
}
