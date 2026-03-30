package polimorfismo;

public class IngressoEstudante extends Ingresso {

    public IngressoEstudante(String evento, double valor) {
        super(evento, valor);
    }

    @Override
    public void exibir() {
       super.exibir();
       System.out.println("Valor alterado: " + (this.valor / 2));
    }
}