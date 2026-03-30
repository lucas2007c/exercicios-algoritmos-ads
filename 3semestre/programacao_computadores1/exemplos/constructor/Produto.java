package constructor;

/*
Implemente a classe Produto com os atributos nome, preco e quantidade
Crie:
Um construtor que receba apenas nome
Um que receba nome e preço
Um que receba nome, preço e quantidade
Use this() para reaproveitar código entre os construtores (chame um construtor dentro do outro). 
*/
public class Produto {
    String nome;
    float preco;
    int quantidade;

    public Produto(String nome) {
        System.out.println("Entrando no construtor 1");
        this.nome = nome;
    }

    public Produto(String nome, float preco) {
        System.out.println("Entrando no construtor 2");
        this(nome);

        if (preco < 0) {
            this.preco = 0;
        } else {
            this.preco = preco;
        }
    }

    public Produto(String nome, float preco, int quantidade) {
        System.out.println("Entrando no construtor 3");
        this(nome, preco);
        this.quantidade = quantidade;
    }

    public Produto(Produto novoProduto) {
        this(novoProduto.nome, novoProduto.preco, novoProduto.quantidade);
    }

    void exibir() {
        System.out.printf("{\nNome: %s\nPreco: %.2f\nQuantidade: %d\n}", this.nome, this.preco, this.quantidade);
    }
}