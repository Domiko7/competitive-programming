from turtle import *

def kwadrat(bok, kolor):
    begin_fill()
    fillcolor(kolor)
    for _ in range(4):
        fd(bok)
        left(90)
    end_fill()

def kwadraty(ile, bok, kolor):

    for _ in range(ile):
        kwadrat(bok, kolor)
        left(90)
        fd(bok)
        right(90)

    left(90)
    fd(-bok * ile)
    right(90)



def wie(opis):
    dlug = 400
    curr = opis[0]
    bloki = []

    for i in range(1, len(opis)):
        if opis[i] == curr[-1]:
            curr += opis[i]
        else:
            bloki.append(curr)
            curr = opis[i]
    bloki.append(curr)
    print(bloki)

    pu()
    goto(-400 / 2, 0)
    pd()

    bok = dlug / len(bloki)

    for b in bloki:
        if b[0] == "Y":
            kolor = "yellow"
        else:
            kolor = "green"
        kwadraty(len(b), bok, kolor)
        fd(bok)


speed(0)
wie("GGGYGGGYYYYYYYYGGGGGGYGGYGYYGGGGGGYGGGYYGGGGGGGGGYYG")
done()