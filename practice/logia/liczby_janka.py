
def dzielniki(l):
    suma = 1
    ilosc = 1
    i = 2
    while i * i <= l:
        if l % i == 0:
            suma += i
            ilosc += 1
            if i != l // i:
                ilosc += 1
                suma += l // i
        i += 1
    return ilosc, suma

l = int(input())
liczby = []
i = l + 1
while len(liczby) < 5:
    ilosc_i, suma_i = dzielniki(i)
    srednia = suma_i / ilosc_i
    if srednia < (i ** 0.5) and ilosc_i > 1:
        liczby.append(i)
    i += 1
print(*liczby)