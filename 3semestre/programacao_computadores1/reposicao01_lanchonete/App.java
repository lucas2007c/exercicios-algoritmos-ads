package reposicao01_lanchonete;

public class App {
    public static void main(String[] args) {
        Cliente cliente1 = new Cliente("Ana");

        Lanche lanche1 = new Lanche("X-Burguer", 20f, 1);
        Lanche lanche2 = new Lanche("X-Salada", 24f, 2);

        Pedido pedido1 = new Pedido(cliente1);

        pedido1.adicionarLanche(lanche1);
        pedido1.adicionarLanche(lanche2);

        pedido1.aplicarDesconto(50f);

        pedido1.mostrarPedido();
    }
}