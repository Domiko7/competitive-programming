from turtle import *
from math import sqrt

def lodyga(dlug):
    fillcolor("yellow")
    begin_fill()
    for _ in range(2):
        left(45)
        forward(dlug)
        right(45)
        forward(dlug * 2)
        right(45)
        forward(dlug)
        right(135)
    end_fill()
    pu()
    forward((dlug * 2) + ((sqrt(2) * dlug)))
    pd()
    forward(dlug)
    pu()
    backward((dlug * 2) + ((sqrt(2) * dlug)) + dlug)
    pd()


def kls(n):
    szer_lod_kl = 250
    szer = 500
    a = (szer - szer_lod_kl) / 4
    forward(szer_lod_kl)
    for _ in range(n):
        left(45)
        lodyga(a)
        right(90)
        lodyga(a)
        left(45)
        forward(a * 2)
    lodyga(a)

tracer(0)
kls(3)
update()
done()