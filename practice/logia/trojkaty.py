n, p = map(int, input().split())
suma = n * (n + 1) // 2
while suma % p >= 1:
    n += 1
    suma = n * (n + 1) // 2
print(n)
