package constructor;

public class App {
    public static void main(String[] args) {
        Produto p = new Produto("Serra Makita");

        System.out.println("-------------------------------");

        p = new Produto("Parafusadeira", 85f);

        System.out.println("-------------------------------");
        
        p = new Produto("Cano pvc", -10f, 20);
        
        System.out.println("-------------------------------");
        Produto p2 = new Produto(p);
        p2.exibir();
    }
}