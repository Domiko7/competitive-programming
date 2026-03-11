
def generate_array(n, zabudowane):
    arr = []
    zabudowane = set(zabudowane)
    for i in range(1, (n * n) + 1):
        if (i - 1) % n == 0:
            arr.append([])
        if i not in zabudowane:
            arr[-1].append((".", i))
        else:
            arr[-1].append(("X", i))
    return arr

def ms(n, zabudowane):
    arr = generate_array(n, zabudowane)
    sasiedzi = [
                 (0, 1),
        (-1, 0),       (1, 0),
                 (0, -1)
    ]

    maks = [0, set()]

    for i in range(n):
        for j in range(n):
            if arr[i][j][0] != "X":
                l = 0
                for sas in sasiedzi:
                    x = i + sas[0]
                    y = j + sas[1]
                    if n > x >= 0 and n > y >= 0:
                        if arr[x][y][0] == "X":
                            l += 1
                if maks[0] == l:
                    maks[1].add(arr[i][j][1])
                elif maks[0] < l:
                    maks[1] = set()
                    maks[1].add(arr[i][j][1])
                    maks[0] = l
    return list(maks[1])



print(ms(4,[9,10,14]))
print(ms(3,[4,5,6]))