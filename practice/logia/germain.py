
a, b = map(int, input().split())

def sito(n):
    pierwsze = [True] * (n + 1)
    pierwsze[0] = pierwsze[1] = False

    i = 2
    while i * i <= n:
        if pierwsze[i]:
            for j in range(i * i, n + 1, i):
                pierwsze[j] = False
        i += 1
    return pierwsze

pierwsze = sito(2 * b + 1)
liczby_germain = 0
for i in range(a, b):
    p = pierwsze[i]
    if p and pierwsze[2 * i + 1]:
        liczby_germain += 1
print(liczby_germain)