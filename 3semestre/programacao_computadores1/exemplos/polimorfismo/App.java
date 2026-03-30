package polimorfismo;

import java.util.ArrayList;

public class App {
    public static void main(String[] args) {
        ArrayList<Ingresso> ingressos = new ArrayList<>();

        ingressos.add(new Ingresso("Show A", 100));
        ingressos.add(new Ingresso("Show B", 120));

        ingressos.add(new IngressoVIP("Show VIP 1", 200));
        ingressos.add(new IngressoVIP("Show VIP 2", 250));

        ingressos.add(new IngressoEstudante("Show Estudante 1", 80));
        ingressos.add(new IngressoEstudante("Show Estudante 2", 90));

        for (Ingresso ingresso : ingressos) {
            ingresso.exibir();
            System.out.println();
        }
    }
}