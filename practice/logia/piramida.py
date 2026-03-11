from turtle import *
from math import sqrt

def trapez(bok, prze, bok_trapez1, bok_trapez2, color):
    fillcolor(color)
    begin_fill()

    forward(prze)
    left(45)
    forward(bok_trapez1)
    left(45)
    forward(prze)
    left(135)
    forward(bok_trapez2)
    left(135)
    end_fill()

def ele(bok, prze):
    bok_trapez1 = bok * 4
    bok_trapez2 = bok * 6

    bok_trapez3 = prze * 2
    bok_trapez4 = bok * 2

    kolory = ["tomato", "orange"]

    for kolor in kolory:
        trapez(bok, prze, bok_trapez1, bok_trapez2, kolor)

        forward(prze)
        left(45)
        forward(bok_trapez1)
        right(135)
        forward(-prze)

        trapez(bok, prze, bok_trapez1, bok_trapez2, kolor)

        left(45)
        forward(bok_trapez2)
        right(135)

    forward(prze)

    fillcolor("orange")
    begin_fill()
    forward(bok_trapez3)
    left(45)
    forward(bok_trapez4)
    left(90)
    forward(bok_trapez4)
    left(90)
    forward(bok_trapez1)
    left(135)

    forward(bok_trapez3)
    end_fill()
    left(45)

    fillcolor("olive")
    begin_fill()

    for _ in range(4):
        forward(bok_trapez4)
        right(90)

    end_fill()

    right(45)
    forward(bok_trapez3)
    forward(prze)

def piramida(n):
    szer = 600
    szer_elementu = szer / n
    przekatna_pix = szer_elementu / 6
    bok_pix = przekatna_pix / sqrt(2)
    kord = (-300, -150)

    pu()
    goto(kord)
    #pd()
    for i in range(n, 0, -1):
        for _ in range(i):
            ele(bok_pix, przekatna_pix)
        goto(kord)
        left(45)
        for _ in range(n - i + 1):
            forward(bok_pix * 6)
        right(45)



napis = int(input())
tracer(0)
piramida(napis)
update()
done()
