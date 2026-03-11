

def red(l):
    changed = []
    i = len(l) - 1
    while i >= 0:
        if l[i] == l[i - 1] and i > 0:
            changed.append(str(int(l[i]) * 2)[-1])
            i -= 1
        else:
            changed.append(l[i])
        i -= 1
    changed.reverse()
    return changed

def redukcja(n):
    l = list(str(n))
    while True:
        new = red(l)
        if new == l:
            return "".join(new)
        l = new

print(redukcja(84211))
print(redukcja(426633))