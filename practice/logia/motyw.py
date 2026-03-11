from turtle import *
from math import sqrt

wys = 480
bok = wys / 8
bok2 = (bok * sqrt(3)) / 2


def szesc(bok, kolor):
    fillcolor(kolor)
    begin_fill()
    for i in range(2):
        left(30)
        forward(bok)
        left(60)
        forward(bok)
        left(60)
        forward(bok)
        left(30)
    end_fill()

def element(x, y):
    pu()
    goto(x, y)
    pd()
    szesc(bok, "#ffcc00")
    right(30)
    forward(-bok / 2)
    szesc(bok2, "#ff6600")
    forward(bok / 2)
    left(30)

def motyw():
    element(0, 0)

    element(104, 0)
    element(-104, 0)

    element(52, 90)
    element(-52, 90)
    element(-155, 90)
    element(155, 90)

    element(52, -90)
    element(-52, -90)
    element(-155, -90)
    element(155, -90)

    element(0, 180)
    element(0, -180)

    #left(90)
    #forward(480)


speed(0)
tracer(0)
motyw()
update()
done()