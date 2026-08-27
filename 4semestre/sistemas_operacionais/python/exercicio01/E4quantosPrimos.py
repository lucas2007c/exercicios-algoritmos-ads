# Conte quantos números primos menores que 1.000.000.000 existem.

from E1primo import isPrimo

quantidade = 0;

for i in range(2, 1000000000):
    if isPrimo(i):
        quantidade += 1

print(f"Existem {quantidade} números primos menores que 1.000.000.000")