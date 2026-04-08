package interfaces;

public interface Calculadora {
    static int som(int num1, int num2){
        return num1 + num2; 
    };

    static int sub(int num1, int num2){
        return num1 - num2;
    };

    static int mult(int num1, int num2){
        return num1 * num2;
    };

    static int div(int num1, int num2){
        return num1 / num2;
    };
}
