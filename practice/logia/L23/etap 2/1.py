n = int(input())
slowa = [input() for _ in range(n)]
kolejnosc = "aeiouybcdfghjklmnpqrstvwxz"
kolejnosci = {}

for i, j in enumerate(kolejnosc):
    kolejnosci[j] = i

for slowo in slowa:
    wystapienia = [0] * (len(kolejnosc) + 1)
    for ch in slowo:
        wystapienia[kolejnosci[ch]] += 1
    for i, w in enumerate(wystapienia):
        if w == 1:
            print(kolejnosc[i], end="")
        elif w > 1:
            print(kolejnosc[i], end="")
            print(w, end="")
    print()
