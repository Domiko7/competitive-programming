from math import sqrt

def sito(n):
    liczby = [True] * (n + 1)
    liczby[1] = liczby[0] = False

    for i in range(2, int(sqrt(n)) + 1):
        if liczby:
            for j in range(i * i, n + 1, i):
                liczby[j] = False
    return liczby

a, b = map(int, input().split())
count = 0
pierwsze = sito(2 * b + 1)

for i in range(a, b + 1):
    if pierwsze[i] and pierwsze[2 * i + 1]:
        count += 1

print(count)
