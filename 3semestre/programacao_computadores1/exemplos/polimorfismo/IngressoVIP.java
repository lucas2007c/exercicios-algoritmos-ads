package polimorfismo;

public class IngressoVIP extends Ingresso {

    public IngressoVIP(String evento, double valor) {
        super(evento, valor);
    }

    @Override
    public void exibir() {
        super.exibir();
        System.out.println("Valor alterado: " + (this.valor * 2));
    }
}