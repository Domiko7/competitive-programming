
g = int(input())
dolki = list(map(int, input().split()))
count = 0
minimalna = min(dolki)

if g > minimalna:
    for dolek in dolki:
        if dolek < g:
            count += g - dolek
else:
    for dolek in dolki:
        if dolek == minimalna:
            count += dolek - g

print(count)