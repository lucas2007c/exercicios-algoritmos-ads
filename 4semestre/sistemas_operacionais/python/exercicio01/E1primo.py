# Crie uma função que determine se um número é primo ou não. Retorne True ou False. 
def isPrimo(numero):
    if numero < 2:
        return False

    for i in range(2, numero):
        if numero % i == 0:
            return False
    
    return True   

# Serve para impedir que esse trecho seja executado quando esse arquivo é importado
if __name__ == "__main__":
    numero = int(input("Digite um número: "))

    if isPrimo(numero):
        print(f"O número {numero} é primo.")
    else:
        print(f"O número {numero} não é primo")