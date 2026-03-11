n = int(input())
ogrodzenie = list(map(int, input().split()))
suma = 0
maks = 0

for i in range(n):
    suma += ogrodzenie[i]
    for j in range(n):
        if abs(i - j) > 1 and abs(i - j) != n - 1:
            maks = max(ogrodzenie[i] + ogrodzenie[j], maks)

print(suma - maks)