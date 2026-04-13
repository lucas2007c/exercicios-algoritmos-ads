package polimorfismo;

import java.util.ArrayList;

public class App {
    public static void main(String[] args) {
        ArrayList<Personagem> personagens = new ArrayList<>();

        personagens.add(new Personagem("Bartender", 50));
        personagens.add(new Personagem("Aldeão", 50));

        personagens.add(new Guerreiro("Guerreiro 1", 200, 50));
        personagens.add(new Guerreiro("Guerreiro 2", 250, 50));

        personagens.add(new Mago("Davy Jones", 120, 300));
        personagens.add(new Mago("Patolino", 300, 250));

        for (Personagem personagem : personagens) {
            String personagemTipo = personagem.getClass().getSimpleName();

            System.out.println("Tipo: " + personagemTipo);
            personagem.exibir();
            System.out.println();
          
            // if (personagemTipo.equals("Mago")) {
            //     Mago mago = (Mago) personagem;
            //     System.out.println("Este mago possui " + mago.mana + " de mana");
            // }

            // if (personagem instanceof Mago) {
            // Mago mago = (Mago) personagem;
            // System.out.println("Este mago possui " + mago.mana + " de mana");
            // }
        }
    }
}