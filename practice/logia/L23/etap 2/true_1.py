from turtle import *
from math import sqrt

def trojkat(bok, kolor):
    begin_fill()
    fillcolor(kolor)
    for _ in range(3):
        fd(bok)
        left(120)
    end_fill()

def trojkat2(bok, kolor):
    begin_fill()
    fillcolor(kolor)
    left(60)
    fd(bok)
    left(120)
    fd(bok)
    left(120)
    fd(bok)
    left(60)
    end_fill()

def trojkaty(bok, cyfry):
    #trojkat2(bok, "white")
    if cyfry[0] == "0":
        trojkat(bok, "white")
    else:
        trojkat(bok, "green")
    fd(bok)
    if cyfry[1] == "0":
        trojkat2(bok, "white")
    else:
        trojkat2(bok, "green")
    if cyfry[2] == "0":
        trojkat(bok, "white")
    else:
        trojkat(bok, "green")
    fd(bok)
    if cyfry[3] == "0":
        trojkat2(bok, "white")
    else:
        trojkat2(bok, "green")


def pasek(n):
    bok = 26
    cyfry = ["0000",
             "0001",
             "0010",
             "0011",
             "0100",
             "0101",
             "0110",
             "0111",
             "1000",
             "1001"]
    pu()
    goto(-((len(str(n)) * 2 * bok) + bok) / 2, 0)
    pd()
    for i in str(n):
        trojkaty(bok, cyfry[int(i)])


pasek(1203)
done()