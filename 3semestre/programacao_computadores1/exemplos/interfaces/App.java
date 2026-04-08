package interfaces;

public class App {
    public static void main(String[] args) {
        Pato pato = new Pato();
        pato.andar();
        pato.nadar();
        pato.voar();
        pato.fazerSom();
        
        System.out.println(Calculadora.som(1, 2));
        System.out.println(Calculadora.sub(1, 2));
        System.out.println(Calculadora.mult(1, 2));
        System.out.println(Calculadora.div(10, 2));
    }
}