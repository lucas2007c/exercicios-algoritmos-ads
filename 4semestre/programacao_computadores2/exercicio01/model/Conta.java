package model;

import exception.SaldoInsuficienteException;
import exception.ValorNegativoException;

abstract class Conta {
    public int numero;
    public String titular;
    public double saldo;

    public Conta(int numero, String titular, double saldo) {
        this.numero = numero;
        this.titular = titular;
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
}
