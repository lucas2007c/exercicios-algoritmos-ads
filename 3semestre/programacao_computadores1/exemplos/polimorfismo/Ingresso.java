package polimorfismo;

public class Ingresso {
    String evento;
    double valor;

    public Ingresso(String evento, double valor) {
        this.evento = evento;
        this.valor = valor;
    }

    public void exibir() {
        System.out.println("Tipo: " + this.getClass().getSimpleName());
        System.out.println("Evento: " + evento);
        System.out.println("Valor padrao: R$ " + valor);
    }
}