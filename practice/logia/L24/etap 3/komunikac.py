
def bfs(start, koniec, graf):
    odwiedzone = set()
    kolejka = [(0, start)]
    odwiedzone.add(start)
    counter = 0

    while kolejka:
        d, punkt = kolejka.pop(0)

        if punkt == koniec:
            return d

        for s in graf[punkt]:
            if s not in odwiedzone:
                odwiedzone.add(s)
                kolejka.append((d + 1, s))
    return -1



n, m = map(int, input().split())
stacje = {i: set() for i in range(1, n + 1)}

for _ in range(m):
    sts = list(map(int, input().split()))

    for i in range(len(sts) - 1):
        stacje[sts[i]].add(sts[i + 1])
        stacje[sts[i + 1]].add(sts[i])

start, koniec = map(int, input().split())

wynik = bfs(start, koniec, stacje)
print(wynik)
