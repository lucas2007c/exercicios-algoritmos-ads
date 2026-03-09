package modificadores.mod1;

public class Modificadores {
    private String nome; // Acessível apenas dentro da própria classe.
    String endereco; // Acessível apenas dentro do mesmo pacote.
    protected int quantidade; // Acessível no mesmo pacote e por subclasses(mesmo fora do pacote).
    public float preco; // Acessível de qualquer lugar.

    public String getNome(){
        return this.nome;
    }
}