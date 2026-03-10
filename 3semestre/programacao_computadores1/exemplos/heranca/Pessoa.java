package heranca;

public class Pessoa {
    String nome;
    int idade;

    Pessoa(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }

    public void mostrarPessoa() {
        System.out.println("Nome: " + this.nome);
        System.out.println("idade: " + this.idade);
    }

    public void apresentar() {
        System.out.printf("Ola, me chamo %s!\n\n", this.nome);
    }
}