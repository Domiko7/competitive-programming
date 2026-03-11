
g, m = map(int, input().split())

godziny = "cznf"
minuty = "znfcp"
zmiana = 0

while godziny[g % 4] != minuty[m % 5]:
    m += 1
    if m == 60:
        m = 0
        g += 1
    if g == 24:
        g = 0
    zmiana += 1
print(zmiana)