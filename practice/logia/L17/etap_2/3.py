
def kolit(napis):
    wiersze = [[]]
    j = 1
    for i in range(len(napis)):
        wiersze[-1].append(napis[i])
        if len(wiersze[-1]) >= j:
            j += 1
            wiersze.append([])
    wystapienia = {}
    counter = 0
    for i in range(len(wiersze)):
        for j, l in enumerate(wiersze[i]):
            if j not in wystapienia:
                wystapienia[j] = l
                counter += 1
            if l != wystapienia[j] and wystapienia[j] != ():
                wystapienia[j] = ()
                counter -= 1

    return counter

print(kolit('ABCDEFGH'))
print(kolit('ALAMAKRABY'))

"""



RABY
MAK
LA
A

"""