package abstracao;

public class App {
    public static void main(String[] args) {
        Pessoa pessoa = new Funcionario("Joao", 30, 2500.0f);
        pessoa.apresentar();
        pessoa.deslocar();
    }
}