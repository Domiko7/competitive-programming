
n = input()
cel = input()

tabela = [[]]

for i in range(100):
    tabela[-1].append(n[i])
    if len(tabela[-1]) % 10 == 0 and i != 99:
        tabela.append([])

