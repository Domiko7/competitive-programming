from turtle import *
from math import sqrt

dlug = 480
dlug_pix = 480 / 20
dlug_pix2 = dlug_pix * sqrt(2)

def pixel(kolor, dlug):
    fillcolor(kolor)
    begin_fill()
    for _ in range(4):
        forward(dlug)
        left(90)
    end_fill()

def obramowka(kolor, ile):
    left(90)
    for _ in range(4):
        for _ in range(ile - 1):
            pixel(kolor, dlug_pix)
            forward(dlug_pix)
        forward(-dlug_pix)
        right(90)

def kawalek_kwiatka():
    for _ in range(3):
        pixel("yellow", dlug_pix2)
        forward(dlug_pix2)
    left(90)
    forward(dlug_pix2)
    pixel("red", dlug_pix2)
    forward(dlug_pix2)
    pixel("red", dlug_pix2)
    forward(-dlug_pix2)
    left(90)
    forward(dlug_pix2)
    right(90)
    pixel("red", dlug_pix2)

    right(90)
    forward(-dlug_pix2 * 2)
    left(90)
    forward(-dlug_pix2)
    right(90)


def kwiatek():
    for _ in range(3):
        kawalek_kwiatka()
        forward(dlug_pix2 * 3)
        right(90)
        forward(-dlug_pix2 * 4)
        kawalek_kwiatka()
    pu()
    forward(-dlug_pix2)
    right(135)
    forward(-dlug_pix * 8)
    left(45)
    pd()


def dywan():
    pu()
    goto(-dlug / 2, -dlug / 2)
    pd()
    obramowka("green", 20)

    right(90)
    forward(dlug_pix)
    left(90)
    forward(dlug_pix)
    right(90)

    obramowka("yellow", 18)

    fillcolor("green")
    begin_fill()
    right(90)
    for _ in range(4):
        forward(dlug_pix * 16)
        left(90)
    end_fill()

    forward(dlug_pix)
    left(45)
    kwiatek()
    right(45)
    forward(dlug_pix * 8)
    left(45)
    kwiatek()
    left(45)
    pu()
    forward(dlug_pix * 16)
    right(90)
    forward(-dlug_pix * 2)
    right(45)
    forward(dlug_pix2)
    pd()
    kwiatek()
    pu()
    left(45)
    forward(-dlug_pix * 8)
    right(45)
    pd()
    kwiatek()

#tracer(0)
hideturtle()
speed(0)
dywan()
#update()
done()