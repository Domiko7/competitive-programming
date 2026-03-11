n = int(input())
karty = list(map(int, input().split()))[::-1]
zapamientane = []
ruchy = 0
ost = -1

for i, karta in enumerate(karty):
    if karta in zapamientane:
        if i % 2 == 0:
            zapamientane.remove(karta)
            ruchy += 1
        else:
            ost = karta
    else:
        zapamientane.append(karta)
        ruchy += 1
        if ost != -1:
            zapamientane.remove(ost)
            ost = -1
            ruchy += 1
print(ruchy)