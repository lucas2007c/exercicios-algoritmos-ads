package services;

import exception.SaldoInsuficienteException;
import exception.ValorNegativoException;
import java.io.IOException;
import java.nio.file.*;
import model.ContaCorrente;

import java.util.ArrayList;
import java.util.List;

public class ContaCorrenteService {

    ArrayList<ContaCorrente> contas = new ArrayList<>();

    Path caminho = Paths.get("src/txt/contas.txt");

    public void carregarDados() throws IOException {
        List<String> linhas = Files.readAllLines(caminho);

        for (String linha : linhas) {
            String[] dados = linha.split(",");

            int numero = Integer.parseInt(dados[0]);
            String titular = dados[1];
            double saldo = Double.parseDouble(dados[2]);

            ContaCorrente conta = new ContaCorrente(numero, titular, saldo);
            contas.add(conta);
        }
    }
    
    public void salvarDados() {
        List<String> linhas = new ArrayList<>();
        
        for (ContaCorrente conta : contas) {
            String linha = conta.getNumero() + "," + conta.getTitular() + "," + conta.getSaldo();
            linhas.add(linha);
        }

        try {
            Files.write(caminho, linhas);
        } catch (IOException e) {
            System.out.println("Erro ao salvar os dados no arquivo: " + e.getMessage());
        }
    }

    public void sacar(int numero, double valor) {
        ContaCorrente conta = buscarConta(numero);

        try {
            if (conta != null) {
                conta.sacar(valor);
 
                salvarDados(); 
            }
        } catch (SaldoInsuficienteException | ValorNegativoException e) {
            System.out.println(e.getMessage());
        }
    }

    public void depositar(int numero, double valor) {
        ContaCorrente conta = buscarConta(numero);

        try {
            if (conta != null) {
                conta.depositar(valor);
                
                System.out.println("Depósito realizado com sucesso! Novo saldo: " + conta.getSaldo());
                
                salvarDados();
            }
        } catch (ValorNegativoException e) {
            System.out.println(e.getMessage());
        }

    }

    public ContaCorrente buscarConta(int numero) {
        for (ContaCorrente conta : contas) {
            if (conta.getNumero() == numero) {
                return conta;
            }
        }

        System.out.println("Conta não encontrada.\n");
        return null;
    }

    public void adicionarConta(ContaCorrente conta) {
        if (buscarConta(conta.getNumero()) != null) {
            System.out.println("Já existe uma conta com esse número.\n");
        }

        contas.add(conta);
        System.out.println("Conta adicionada com sucesso.\n");
        salvarDados();
    }

    public boolean atualizarConta(int numero, ContaCorrente novaConta) {
        for (int i = 0; i < contas.size(); i++) {
            if (contas.get(i).getNumero() == numero) {
                contas.set(i, novaConta);
                System.out.println("Conta atualizada com sucesso.\n");
                
                salvarDados();
                return true;
            }
        }
        
        System.out.println("Conta não encontrada.\n");
        return false;
    }

    public boolean removerConta(int numero) {
        ContaCorrente conta = buscarConta(numero);

        if (conta != null) {
            contas.remove(conta);
            System.out.println("Conta removida com sucesso.\n");
            
            salvarDados();
            return true;
        }

        System.out.println("Conta não encontrada.");
        return false;
    }

    public void listarContas() {
        if (contas.isEmpty()) {
            System.out.println("Nenhuma conta cadastrada.\n");
            return;
        }

        for (ContaCorrente conta : contas) {
            conta.imprimirDados();
        }
    }
}
