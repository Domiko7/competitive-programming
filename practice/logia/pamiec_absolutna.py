
n = int(input())
wiersz = list(map(int, input().split()))[::-1]
zapamietane = []
ruchy = 0
czy_karta_przed = False
kolejna = -1

for i in wiersz:

    if i in zapamietane:
        zapamietane.remove(i)
    else:
        zapamietane.append(i)

    if czy_karta_przed:
        ruchy += 1
    else:
        czy_karta_przed = True