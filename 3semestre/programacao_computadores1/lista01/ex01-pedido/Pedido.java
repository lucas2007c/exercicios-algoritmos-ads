package lista01.ex01_pedido;

import java.util.ArrayList;

public class Pedido {
    int id;
    String nome;
    ArrayList<Produto> produtos = new ArrayList<>();
    float valorFinal;
    
    Pedido(String nome){
        id += 1;
        this.nome = nome;
    }

    int getId() {
        return id;
    }

    void setId(int id) {
        this.id = id;
    }

    String getNome() {
        return nome;
    }

    void setNome(String nome) {
        this.nome = nome;
    }
    
    void listarProdutos(){
        for(int i = 0; i < produtos.size(); i++){
            System.out.println(produtos.get(i).listar());
        }
    }
    
    void adicionarProduto(Produto novoProduto){
        produtos.add(novoProduto);
    }
    
    void removerProduto(int indice){
        produtos.remove(indice);
    }
    
    float calcularValorFinal(){
        for (int i = 0; i < produtos.size(); i++) {
            valorFinal += produtos.get(i).calcularValorTotal();
        }
        return valorFinal;
    }
}
