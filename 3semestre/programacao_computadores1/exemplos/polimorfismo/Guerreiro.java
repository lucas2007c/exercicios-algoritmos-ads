package polimorfismo;

public class Guerreiro extends Personagem {
    int armadura;

    public Guerreiro(String nome, int vida, int armadura) {
        super(nome, vida);
        this.armadura = armadura;
    }

    @Override
    public void exibir() {
        super.exibir();
        System.out.println("Armadura: " + armadura);
    }
}