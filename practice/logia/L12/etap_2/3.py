
def kombinacje(slowo, so_far="", all=None):
    if all is None:
        all = set()
    if len(slowo) == 0:
        all.add(so_far)
    for i in range(len(slowo)):
        kombinacje(slowo[:i] + slowo[i + 1:], so_far + slowo[i], all)
    return all

"""""""""
def porownaj(a, b):
    counter = 0
    odznaczone = [False] * (len(a) + 1)
    for i in range(len(a)):
        if not odznaczone[i]:
            dl = 0
            j = i
            while a[j] != b[i]:
                j = b.find(a[j])
                dl += 1
                odznaczone[j] = True
            counter += dl
    return counter
"""""""""


def porownaj(a, b):
    counter = 0
    pos = {litera: i for i, litera in enumerate(b)}
    for i in range(len(a)):
        for j in range(i + 1, len(a)):
            if pos[a[i]] > pos[a[j]]:
                counter += 1
    return counter


def Miasta(A, T, Z):
    #return porownaj("KWLSPNABC", "BKPLNSCWA")
    combs = kombinacje(A)
    minimum = float("inf")
    wynik = ""
    for c in combs:
        p1 = porownaj(c, A)
        p2 = porownaj(c, T)
        p3 = porownaj(c, Z)
        if p1 + p2 + p3 < minimum:
            minimum = p1 + p2 + p3
            wynik = c
    return wynik


print(Miasta("PŁKW", "WPŁK", "PWKŁ"))
print(Miasta("TSG", "TGS", "GST"))
print(Miasta("PŁKWTSG", "WPŁKTGS", "PWKŁGST"))