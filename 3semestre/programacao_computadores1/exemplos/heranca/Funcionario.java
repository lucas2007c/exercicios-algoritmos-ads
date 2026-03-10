package heranca;

public class Funcionario extends Pessoa {
    float salario;

    Funcionario(String nome, int idade, float salario) {
        super(nome, idade);
        this.salario = salario;
    }

    public void mostrarFuncionario() {
        mostrarPessoa();
        System.out.println("Salario: " + this.salario);
    }

    @Override
    public void apresentar() {
        System.out.println("Ola, sou funcionario do atacadao!\n");
    }
}