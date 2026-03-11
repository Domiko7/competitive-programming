from turtle import *
from math import sqrt

def side(czy_lewo, total, wys, szer):
    if czy_lewo:
        obrot = 1
    else:
        obrot = -1
    pix = wys / (total + 1)
    right(90 * obrot)
    for _ in range(total):
        fd(pix)
        right(90 * obrot)
        fd(pix)
        left(90 * obrot)
    right(45 * obrot)
    fd(sqrt(2) * pix)

    pu()
    fd(-wys * sqrt(2))
    pd()
    left(135 * obrot)



def tarasy(n):
    szer = 600
    wys = 300
    pu()
    goto(-szer / 2, -wys / 2)
    pd()

    lewo = 0
    prawo = 0

    left(180)

    for i in str(n):
        if int(i) % 2 == 0:
            lewo += 1
        else:
            prawo += 1
    side(True, lewo, wys, szer)
    fd(-szer)
    left(180)
    side(False, prawo, wys, szer)

tarasy(14271)
tarasy(124456789)
tarasy(2648)
tarasy(12)
done()