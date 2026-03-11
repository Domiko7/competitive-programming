
def sito(n):
    liczby = [True] * (n + 1)
    liczby[0] = liczby[1] = False
    for i in range(2, n):
        if liczby[i]:
            for j in range(i * i, n + 1, i):
                liczby[j] = False
    return liczby

a, b = map(int, input().split())
czy_pierwsze = sito(2 * b + 1)
counter = 0
for i in range(a, b + 1):
    if czy_pierwsze[i] and czy_pierwsze[2 * i + 1]:
        counter += 1
print(counter)
