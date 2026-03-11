
n = int(input())
panele = list(map(int, input().split()))

suma = 0
maks = 0

for i in range(n):
    suma += panele[i]
    for j in range(n):
        if (panele[i] + panele[j]) > maks and not (i == 0 and j == (n - 1)) and not (j == 0 and i == (n - 1)) and (abs(i - j) > 1):
            maks = panele[i] + panele[j]

print(suma - maks)