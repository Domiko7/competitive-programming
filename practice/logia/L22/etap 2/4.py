

slowo, klucz = input().split()
posortowany_klucz = sorted(klucz)
do_dodania = {}
nowy_klucz = []
for i, c in enumerate(klucz):
    do_dodania[c] = do_dodania.get(c, 0) + 1
    nowy_klucz.append(posortowany_klucz.index(c) + do_dodania[c])

for i in nowy_klucz:
    for j in range(i - 1, len(slowo), len(klucz)):
        print(slowo[j], end="")