package reposicao01_lanchonete;

import java.util.ArrayList;

public class Pedido {
    Cliente cliente;
    ArrayList<Lanche> lanches = new ArrayList<>();
    float decimalDesconto;

    Pedido(Cliente cliente) {
        this.cliente = cliente;
    }

    Pedido(Cliente cliente, ArrayList<Lanche> lanches) {
        this(cliente);
        this.lanches = lanches;
    }

    void mostrarLanches() {
        for (int i = 0; i < lanches.size(); i++) {
            System.out.printf("Nome: %s\t | Preco: %.2f\n", lanches.get(i).getNome(), lanches.get(i).getPreco());
        }
    }

    void mostrarPedido() {
        System.out.println("---- Cliente ----");
        cliente.mostrarCliente();

        System.out.println("\n---- Lanches ----");
        mostrarLanches();

        System.out.printf("\n---- Total a Pagar ----\n");
        System.out.printf("Total: %.2f\n", calcularTotal());
        System.out.printf("Total com imposto: %.2f\n", calcularTotalComImposto());
        System.out.printf("Desconto aplicado: %.0f%%\n", this.decimalDesconto * 100);
        System.out.printf("Total com desconto: %.2f", this.calcularTotalComDesconto());
    }

    float calcularTotal() {
        float total = 0;
        for (int i = 0; i < lanches.size(); i++) {
            total += (float) (lanches.get(i).getPreco() * lanches.get(i).getQuantidade());
        }
        return total;
    }

    float calcularTotalComImposto() {
        return (float) (calcularTotal() * 1.47);
    }

    float calcularTotalComDesconto() {
        return (float) (calcularTotalComImposto() * decimalDesconto);
    }

    void aplicarDesconto(float desconto) {
        if (desconto > 0 && desconto <= 100) {
            this.decimalDesconto = desconto / 100;
        } else {
            throw new Error("O desconto deve ser de 1 a 100");
        }
    }

    public Cliente getCliente() {
        return cliente;
    }

    public void setCliente(Cliente cliente) {
        this.cliente = cliente;
    }

    public void setLanches(ArrayList<Lanche> lanches) {
        this.lanches = lanches;
    }

    public void adicionarLanche(Lanche lanche) {
        this.lanches.add(lanche);
    }

    public void removerLanche(Lanche lanche) {
        this.lanches.remove(lanche);
    }
}