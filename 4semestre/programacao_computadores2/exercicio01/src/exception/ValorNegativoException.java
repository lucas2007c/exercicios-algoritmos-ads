package exception;

public class ValorNegativoException extends Exception {
    public ValorNegativoException() {
        super("Insira um valor maior que zero.\n");
    }
}
