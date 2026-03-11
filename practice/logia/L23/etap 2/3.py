n = int(input())
karty = list(map(int, input().split()))[::-1]
zapamientane = set()
ruchy = 0
czy_pierwsza = True

for i in range(len(karty)):
    if karty[i] in zapamientane:
        zapamientane.remove(karty[i])
        if i != 0 and karty[i - 1] != karty[i] and not czy_pierwsza:
            ruchy += 2
        else:
            ruchy += 1
        czy_pierwsza = True
    else:
        zapamientane.add(karty[i])
        if not czy_pierwsza:
            ruchy += 1
            czy_pierwsza = True
        else:
            czy_pierwsza = False
print(ruchy)
