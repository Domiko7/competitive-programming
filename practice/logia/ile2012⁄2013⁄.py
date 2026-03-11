
def KIEDY(x, y):
    pozycja = 0
    dzien = 0
    noc = False
    while pozycja < 1000:
        if not noc:
            pozycja += x
            noc = True
            dzien += 1
        else:
            pozycja -= y
            noc = False
    return dzien
print(KIEDY(300, 100))
print(KIEDY(4, 2))
