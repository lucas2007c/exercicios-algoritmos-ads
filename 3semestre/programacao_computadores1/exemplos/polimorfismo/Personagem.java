package polimorfismo;

public class Personagem {
    String nome;
    int vida;

    public Personagem(String nome, int vida) {
        this.nome = nome;
        this.vida = vida;
    }

    public void exibir() {
        System.out.println("Nome: " + nome);
        System.out.println("Vida: " + vida);
    }
}