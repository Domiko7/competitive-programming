
slowo = input()

occ = {}
for i in slowo:
    occ[i] = occ.get(i, 0) + 1

posortowane = sorted(occ.items())

jedno = None
slowo = []
for l, i in posortowane:
    if i % 2 == 1 and jedno is None:
        jedno = l
    for j in range(i // 2):
        slowo.append(l)

slowo = "".join(slowo)

if jedno is not None:
    print(slowo + jedno + slowo[::-1])
else:
    print(slowo + slowo[::-1])