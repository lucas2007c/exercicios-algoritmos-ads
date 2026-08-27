# Exiba na tela os números menores que 1.000.000.000 que são divididos por 13, 23 e 41 ao mesmo tempo. Mostre também quantos números você achou.
quantidade = 0;

for i in range(13, 1000000000):
    if i % 13 == 0 and i % 23 == 0 and i % 41 == 0:
        print(i)
        quantidade += 1

print(f"Total de números: {quantidade}")