
def tram(m, n):
    alfabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[:m]
    stacje = [False] * m
    path = []
    i = 0
    dodalismy = 0
    odwroc = False
    left_offset = 0
    right_offset = m - 1
    while len(path) < m:
        dodalismy = 0
        while True:
            if not stacje[i]:
                dodalismy += 1
            if dodalismy == n:
                break
            if i >= right_offset:
                odwroc = True
            elif i <= left_offset:
                odwroc = False
            if not odwroc:
                i += 1
            else:
                i -= 1
        stacje[i] = True
        path.append(alfabet[i])
        if i == left_offset:
            left_offset += 1
            odwroc = False
        elif i == right_offset:
            right_offset -= 1
            odwroc = True
    return "".join(path)


print(tram(6, 5))
print(tram(4, 7))
print(tram(26, 1000))