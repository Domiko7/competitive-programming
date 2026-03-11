from math import sqrt

def dzielniki(n):
    suma = 1
    ilosc = 1
    i = 2
    while i * i <= n:
        if n % i == 0:
            ilosc += 1
            suma += i
            if i != n // i:
                suma += n // i
                ilosc += 1
        i += 1
    return suma, ilosc

n = int(input())
liczby = []
while len(liczby) < 5:
    n += 1
    suma, ilosc = dzielniki(n)
    if (suma / ilosc) <= sqrt(n) and ilosc > 1:
        liczby.append(n)
print(*liczby)