from math import sqrt
from turtle import *

bok = 16

def frag():
    for _ in range(2):
        forward(bok)
        left(45)
        forward(bok)
        left(135)
        forward(bok)
        left(45)
        forward(bok)
        left(90)
    left(90)
    forward(bok)
    left(45)
    fillcolor("green")
    begin_fill()
    for _ in range(4):
        forward(bok)
        right(90)
    end_fill()
    right(45)
    forward(-bok)

def ele(num):
    if num % 2 == 0:
        for _ in range(2):
            frag()
            left(180)
    else:
        for _ in range(2):
            pu()
            forward(bok)
            pd()
            frag()
            left(180)
            pu()
            forward(bok)
            pd()

def filar(n):
    for i in range(n):
        ele(i)
        pu()
        left(90)
        forward(bok * sqrt(2))
        right(90)
        pd()
    pu()
    left(90)
    forward(-bok * sqrt(2) * n)
    right(90)
    pd()

def filary(x, y):
    pu()
    pd()
    for i in range(x):
        filar(y)
        pu()
        forward(bok * 4 + (sqrt(2) * bok * 2))
        pd()

tracer(0)
filary(3, 7)
update()
done()