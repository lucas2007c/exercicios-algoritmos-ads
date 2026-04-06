package abstracao;

public class Funcionario extends Pessoa {
    float salario;

    public Funcionario(String nome, int idade, float salario) {
        super(nome, idade);
        this.salario = salario;
    }

    @Override
    void deslocar() {
        System.out.println("O funcionario se desloca para o trabalho.");
    }
}