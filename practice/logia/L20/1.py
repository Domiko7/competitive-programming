from turtle import *

def kwadrat(bok, kolor):
    begin_fill()
    fillcolor(kolor)
    for _ in range(4):
        fd(bok)
        left(90)
    end_fill()

def pasek(bok, litera):
    #alfabet = "abcdefghijklmnopqrstuvwxyz"
    alfabet = "abcdefghijklmzyxwvutsrqpon"
    idx = alfabet.find(litera)
    for i in range(len(alfabet) // 2):
        if i == idx:
            kolor = "tomato"
        else:
            kolor = "white"
        kwadrat(bok, kolor)
        left(90)
        fd(bok)
        right(90)

    left(90)
    fd((-len(alfabet) / 2) * bok)
    right(90)
    fd(bok)

    for i in range(len(alfabet) // 2, len(alfabet)):
        if i == idx:
            kolor = "tomato"
        else:
            kolor = "white"
        kwadrat(bok, kolor)
        left(90)
        fd(bok)
        right(90)

    left(90)
    fd((-len(alfabet) / 2) * bok)
    right(90)
    fd(-bok)



def koduj(napis):
    szer = 760
    bok = szer / (len(napis) * 2)

    pu()
    goto(-szer / 2, -(bok * 13) / 2)
    pd()

    for l in napis:
        pasek(bok, l)
        fd(bok * 2)


tracer(0)
koduj("tututututututututututututututututuuuu")
update()
done()