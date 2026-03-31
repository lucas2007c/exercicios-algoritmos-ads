package reposicao01_lanchonete;

public class Cliente {
    String nome;

    Cliente(String nome) {
        this.nome = nome;
    }

    void mostrarCliente() {
        System.out.printf("Nome: %s\n", nome);
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
}
