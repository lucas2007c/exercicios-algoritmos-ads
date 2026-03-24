public class Veiculo {
    private int id;
    private String marca;
    private String modelo;
    private int ano;

    public Veiculo(String marca, String modelo, int ano) {
        this.id = SistemaVeiculos.getClassID();
        this.marca = marca;
        this.modelo = modelo;
        this.ano = ano;
    }

    public void exibirInfo(){
        System.out.printf("ID: %d\t| %s %s %d\n", this.id, this.marca, this.modelo, this.ano);
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getMarca() {
        return marca;
    }

    public String getModelo() {
        return modelo;
    }

    public int getAno() {
        return ano;
    }
}