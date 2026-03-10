package heranca;

public class Gerente extends Funcionario {
    float bonus;

    Gerente(String nome, int idade, float salario, float bonus) {
        super(nome, idade, salario);
        this.bonus = bonus;
    }

    public void mostrarGerente() {
        mostrarFuncionario();
        System.out.println("Bonus: " + this.bonus);
        System.out.println("Salario Total: " + calcularSalarioTotal());
    }

    private float calcularSalarioTotal() {
        return this.salario + this.bonus;
    }

    @Override
    public void apresentar() {
        System.out.println("Ola, sou gerente da Apple!\n");
    }
}