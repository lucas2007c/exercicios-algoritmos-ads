package exception;

public class ContaExistenteException extends Exception {

    public ContaExistenteException() {
        super("Ja existe uma conta com esse numeor.");
    }
    
    
}
