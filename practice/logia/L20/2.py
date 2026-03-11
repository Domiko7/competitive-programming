



def ile(liczby):
    counter = 0

    for i in liczby:
        iloczyn = 1
        suma = 0
        liczba = i * 10
        while liczba > 10:
            liczba //= 10
            iloczyn *= liczba % 10
            suma += liczba % 10
        if iloczyn == 0:
            iloczyn = 1
        if iloczyn == suma:
            counter += 1
    return counter

print(ile([7, 13, 1122, 111, 52, 52111]))
print(ile([11, 1000, 123]))
print(ile([321, 152, 2141, 4211]))