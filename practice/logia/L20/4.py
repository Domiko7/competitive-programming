

#acabbaabbaca


def roz(napis):

    if napis == napis[::-1]:
        return napis
    options = []
    for i in range(len(napis)):
        a = napis + napis[:i][::-1]
        b = napis[::-1][:i] + napis
        czy_a = False
        czy_b = False
        if a == a[::-1]:
            options.append(a)
            czy_a = True
        if b == b[::-1]:
            options.append(b)
            czy_b = True
        if czy_a or czy_b:
            break

    return min(options, key=lambda x: (len(x), x))

print(roz("ko"))
print(roz("abba"))
print(roz("abbaca"))
print(roz("abcdefghijklmnopqrstuvwxyz"))
print(roz("ceccccdc")) # cdcccceccccdc