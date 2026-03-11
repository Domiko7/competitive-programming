k = int(input())
klasy = list(map(int, input().split()))
maks_to_samo = (0, float("inf"))

for i in range(len(klasy)):
    poczatki = {}
    for j in range(i, len(klasy)):
        klasa = klasy[j]
        poczatki[klasa] = poczatki.get(klasa, 0) + 1
        if poczatki[klasa] == k and (j - i) < maks_to_samo[1]:
            maks_to_samo = (i, j - i)

print(maks_to_samo[0] + 1, maks_to_samo[1] + 1)