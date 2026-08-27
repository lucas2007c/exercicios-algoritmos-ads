from E3fibonacci import fibonacci
from E5euler import euler
from fatorial import fatorial

class Matematica:
    def calcularFibonnaci(self):
        limite = int(input("Digite até que número deseja gerar a sequência de fibonacci: "))
        return fibonacci(limite)

    def calcularEuler(self):
        limite = int(input("Digite quantos números deseja gerar na sequência de euler: "))
        return euler(limite)
    
    def calcularFatorial(self):
        numero = int(input("Digite um número para calcular o fatorial:"))
        return fatorial(numero)
    
math = Matematica()

sequenciaFibonacci = math.calcularFibonnaci()
numerosEuler = math.calcularEuler()
fatorado = math.calcularFatorial()

print("Fibonnaci: ")
for numero in sequenciaFibonacci:
    print(numero, end=" ")

print("\n\nEuler:")
for numero in numerosEuler:
    print(numero, end=" ")
        
print(f"\n\nFatorial: {fatorado}")