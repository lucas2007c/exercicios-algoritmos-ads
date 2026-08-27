# Crie uma função que calcule os números da sequencia de Fibonacci. Quantos números de Fibonacci menores que 1.000.000 existem e qual a soma deles.

def fibonacci(limite):
    numeros = [0, 1]

    anterior = 0
    numero = 1

    while numero + anterior <= limite:
        numero = numero + anterior
        anterior = numero - anterior
        numeros.append(numero)

    return numeros

if __name__ == "__main__":
    resultado = fibonacci(1000000)

    quantidade = len(resultado);
    soma = 0;

    for numero in resultado:
        soma += numero

    print(f"Existem {quantidade} números de fibonacci antes de 1.000.000 e a soma deles é {soma}")