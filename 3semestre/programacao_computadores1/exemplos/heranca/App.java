package heranca;

public class App {
    public static void main(String[] args) {

        Pessoa p = new Pessoa("Lucas", 19);
        p.mostrarPessoa();
        p.apresentar();

        Funcionario f = new Funcionario("Beto", 22, 1621.f);
        f.mostrarFuncionario();
        f.apresentar();

        Gerente g = new Gerente("Lucas", 28, 9400.0f, 400.f);
        g.mostrarGerente();
        g.apresentar();
    }
}