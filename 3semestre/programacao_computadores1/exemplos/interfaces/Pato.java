package interfaces;

public class Pato extends Animal implements Aereo, Terrestre, Aquatico {
    
    public void voar(){
        System.out.println("Voando");
    }

    public void nadar() {
        System.out.println("Nadando");
    }

    public void andar() {
        System.out.println("Andando");
    }

    @Override
    public void fazerSom() {
        System.out.println("Quack!");
    }
}