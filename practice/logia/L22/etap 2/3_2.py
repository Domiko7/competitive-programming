from math import sqrt

def dzielniki_wlasciwe(n):
    suma = 1
    count = 1
    i = 2

    while i * i <= n:
        if n % i == 0:
            suma += i
            count += 1
            if n // i != n:
                suma += n // i
                count += 1
        i += 1
    return suma, count


n = int(input()) + 1
liczby = 0
while liczby < 5:
    suma, count = dzielniki_wlasciwe(n)
    srednia = suma / count
    if srednia <= sqrt(n) and count != 1:
        print(n, end=" ")
        liczby += 1
    n += 1
