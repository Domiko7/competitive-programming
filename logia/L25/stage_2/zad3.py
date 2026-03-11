
#https://logia.oeiizk.waw.pl/strony/bankzadan/L25_e2_zad3.pdf
#You can translate the exercise via google translator.

minimalna = int(input())
lista = list(map(int, input().split()))
count = 0
mina = min(lista)

if mina < minimalna:
    for i in lista:
        if i < minimalna:
            count += (minimalna - i)
else:
    minad = mina - minimalna
    for i in lista:
        if i == mina:
            count += minad

print(count)
