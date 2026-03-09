package modificadores.mod1;

public class App {
    public static void main(String[] args) {
        Modificadores x = new Modificadores();

        //x.nome = "hello world"; => erro;
        x.endereco = "av. rio branco";
        x.quantidade = 0;
        x.preco = 10f;
    }
}