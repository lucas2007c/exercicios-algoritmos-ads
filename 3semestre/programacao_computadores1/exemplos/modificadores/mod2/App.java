package modificadores.mod2;

import modificadores.mod1.Modificadores;

public class App {
    public static void main(String[] args) {
        Modificadores x = new Modificadores();

        //x.nome = "hello world"; => erro
        //x.endereco = "av. rio branco"; => erro
        //x.quantidade = 0; => erro
        x.preco = 10;
    }
}