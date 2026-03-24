public class Carro extends Veiculo {
    private int portas;

    public Carro(String marca, String modelo, int ano, int portas) {
        super(marca, modelo, ano);
        this.portas = portas;
    }

    @Override
    public void exibirInfo() {
        System.out.printf("ID: %d\t| %s %s %d\t | Portas: %d\n", this.getId(), this.getMarca(), this.getModelo(), this.getAno(), this.portas);
    }
}
