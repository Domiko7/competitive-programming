
a, b = map(int, input().split())
swiatlo = list(map(int, input().split()))
z, g = 0, 0
curr = float("inf")
for c in swiatlo:
    if curr > a and c < a:
        z += 1
        curr = c
    if curr < b and c > b:
        g += 1
        curr = c
print(z, g)