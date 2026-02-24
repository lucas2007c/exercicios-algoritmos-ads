// Crie uma classe Produto e uma classe Pedido. O pedido deve conter vários produtos.

package lista01.ex01_pedido;

public class ex01_pedido {
    public static void main(String[] args) {
        Produto cachorroQuente = new Produto("Cachorro Quente", 12f, 2);
        Produto cocaCola600 = new Produto("Coca Cola 600", 6f, 1);
        
        Pedido pedido1 = new Pedido("Lucas");
        pedido1.adicionarProduto(cachorroQuente);
        pedido1.adicionarProduto(cocaCola600);
        
        System.out.println("Pedido de " + pedido1.getNome());
        pedido1.listarProdutos();
        
        System.out.println("\nValor Final do pedido: " + pedido1.calcularValorFinal());
    }
}
