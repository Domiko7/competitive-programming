
def tram(m, n):
    alfabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[:m]
    stacje = [False] * m
    path = []
    i = 0
    dodalismy = 0
    odwroc = False
    last = ""
    while len(path) < m:
        dodalismy = 0
        while dodalismy < n:
            if not stacje[i] and (last != alfabet[i] or len(path) == m - 1):
                dodalismy += 1
                last = alfabet[i]
            if dodalismy == n:
                break
            if i >= m - 1:
                odwroc = True
            elif i == 0:
                odwroc = False
            if not odwroc:
                i += 1
            else:
                i -= 1
        stacje[i] = True
        path.append(alfabet[i])
    return "".join(path)


print(tram(6, 5))
print(tram(4, 7))
print(tram(26, 1000))