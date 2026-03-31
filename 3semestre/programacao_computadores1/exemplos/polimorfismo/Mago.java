package polimorfismo;

public class Mago extends Personagem {
    int mana;

    public Mago(String nome, int vida, int mana) {
        super(nome, vida);
        this.mana = mana;
    }

    @Override
    public void exibir() {
       super.exibir();
       System.out.println("Mana: " + mana);
    }
}