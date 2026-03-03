package pedido;

public class Produto {
    String nome;
    float preco;
    int quantidade;

    Produto(String nome, float preco, int quantidade) {
        this.nome = nome;
        this.preco = preco;
        this.quantidade = quantidade;
    }

    String getNome() {
        return nome;
    }

    float getPreco() {
        return preco;
    }

    int getQuantidade() {
        return quantidade;
    }

    float calcularValorTotal() {
        return preco * quantidade;
    }

    String listar() {
        return "---------------------\nNome: " + nome + "\nPreco: " + preco + "\nQuantidade: " + quantidade
                + "\nValor Total: " + calcularValorTotal();
    }
}
