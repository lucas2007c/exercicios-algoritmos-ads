public class Moto extends Veiculo {
    private int cilindradas;

    public Moto(String marca, String modelo, int ano, int cilindradas) {
        super(marca, modelo, ano);
        this.cilindradas = cilindradas;
    }

    @Override
    public void exibirInfo(){
        System.out.printf("ID: %d\t| %s %s %d\t | Cilindradas: %d\n", this.getId(), this.getMarca(), this.getModelo(), this.getAno(), this.cilindradas);
    }
}