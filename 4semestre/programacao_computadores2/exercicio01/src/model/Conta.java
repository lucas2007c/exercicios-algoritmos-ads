package model;

import exception.SaldoInsuficienteException;
import exception.ValorNegativoException;

abstract class Conta {
    
    protected int numero;
    protected String titular;
    protected double saldo;

    public Conta(int numero, String titular) {
        this.numero = numero;
        this.titular = titular;
        this.saldo = 0;
    }
    
    public Conta(int numero, String titular, double saldo) {
        this(numero, titular);
        this.saldo = saldo;
    }

    abstract void sacar(double valor) throws SaldoInsuficienteException, ValorNegativoException;

    public void depositar(double valor) throws ValorNegativoException {
        if (valor < 0) {
            throw new ValorNegativoException();
        }

        this.saldo += valor;
    };
    
    public void imprimirDados() {
        System.out.println(numero + "," + titular + "," + saldo);
    };
    
    // ==========================================================
    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public String getTitular() {
        return titular;
    }

    public void setTitular(String titular) {
        this.titular = titular;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }
}
