package services;

import exception.ContaExistenteException;
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

        linhas.stream()
                .map(L -> L.split(","))
                .map(L -> new ContaCorrente(
                Integer.parseInt(L[0]),
                L[1],
                Double.parseDouble(L[2])
        ))
                .forEach(contas::add);

        /* 
            for (String linha : linhas) {
            String[] dados = linha.split(",");

            int numero = Integer.parseInt(dados[0]);
            String titular = dados[1];
            double saldo = Double.parseDouble(dados[2]);

            ContaCorrente conta = new ContaCorrente(numero, titular, saldo);
            contas.add(conta);
        }
         */
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

    public void sacar(int numero, double valor) throws SaldoInsuficienteException, ValorNegativoException {
        ContaCorrente conta = buscarConta(numero);

        if (conta != null) {
            conta.sacar(valor);

            salvarDados();
        }
    }

    public void depositar(int numero, double valor) throws ValorNegativoException {
        ContaCorrente conta = buscarConta(numero);
        if (conta != null) {
            conta.depositar(valor);

            System.out.println("Depósito realizado com sucesso! Novo saldo: " + conta.getSaldo());

            salvarDados();
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

    public void adicionarConta(ContaCorrente conta) throws ContaExistenteException {
        if (buscarConta(conta.getNumero()) != null) {
            throw new ContaExistenteException();
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

    public ArrayList<ContaCorrente> getContas() {
        return contas;
    }
}
