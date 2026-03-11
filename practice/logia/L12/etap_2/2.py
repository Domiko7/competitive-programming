
def IleCyfr(liczba, podstawa):
    counter = 0
    while liczba > 0:
        liczba //= podstawa
        counter += 1
    return counter

print(IleCyfr(123456, 10))
print(IleCyfr(1, 5))
print(IleCyfr(255, 2))
print(IleCyfr(255, 16))