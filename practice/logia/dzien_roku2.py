
m, d = map(int, input().split())

dzien_roku = d

for i in range(1, m):
    parzyste = i % 2 == 0
    pierwsza_czesc = i <= 10
    if not pierwsza_czesc:
        parzyste = not parzyste
    if parzyste:
        dzien_roku += 13
    else:
        dzien_roku += 11
print(dzien_roku)
