package model;

import exception.SaldoInsuficienteException;
import exception.ValorNegativoException;

public class ContaCorrente extends Conta {

    public ContaCorrente(int numero, String titular, double saldo) {
        super(numero, titular, saldo);
    }

    @Override
    public void sacar(double valor) throws SaldoInsuficienteException, ValorNegativoException {
        if (valor > saldo) {
            throw new SaldoInsuficienteException();
        }

        if (valor < 0) {
            throw new ValorNegativoException();
        }

        saldo -= valor;
        System.out.println("Saque realizado com sucesso! novo saldo: " + saldo);
    }
}
