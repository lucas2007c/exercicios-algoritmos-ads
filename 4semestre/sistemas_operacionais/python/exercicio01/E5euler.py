# Use a fórmula de Euler n*n -n +41 para gerar números, sendo n=1 a 1000, quantos são primos?

def euler(quantidade):
    numeros = []

    for i in range(1, quantidade + 1):
        numeros.append(i * i - i + 41)

    return numeros

if __name__ == "__main__":
    from E1primo import isPrimo

    numeros = euler(1000)
    quantidade = 0;

    for numero in numeros:
        if isPrimo(numero):
            quantidade += 1
    
    print(f"Existem {quantidade} números primos na sequencia de euler de 1 a 1000 que são primos.")