
def ile(kwota):
    monety = []
    i = 1
    while i < kwota:
        monety.append(i)
        i *= 3
    akcje = 0
    for i in monety[::-1]:
        miesci = kwota // i
        kwota -= i * miesci
        akcje += miesci
    return akcje
print(ile(29))
print(ile(64))
