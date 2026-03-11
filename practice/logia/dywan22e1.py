from turtle import *

dlug = 400
pix = dlug / 10


def kawalek():
    fillcolor('tomato')
    begin_fill()
    for _ in range(2):
        fd(pix)
        left(90)
        fd(pix * 2)
        left(90)
    end_fill()
    fd(pix)
    for _ in range(4):
        fd(pix * 2)
        left(90)
    fd(pix)
    left(135)
    fillcolor('green')
    begin_fill()

    fd((pix * (2 ** 0.5)) / 2)
    left(90)
    fd((pix * (2 ** 0.5)) / 2)
    right(135)
    fd(pix * 2)
    right(90)
    fd(pix * 2)
    right(135)
    fd((pix * (2 ** 0.5)) / 2)
    left(90)
    fd((pix * (2 ** 0.5)) / 2)
    right(90)
    fd(pix * (2 ** 0.5))
    end_fill()
    left(135)
    fd(-pix * 2)


def kafelek():
    for _ in range(4):
        kawalek()
        left(90)
        fd(pix * 5)
        right(180)
    fd(pix * 3)
    left(90)
    fd(pix * 2)
    fillcolor('tomato')
    begin_fill()
    for _ in range(4):
        fd(pix)
        left(90)
    end_fill()
    fd(-pix * 2)
    right(90)
    fd(-pix * 3)


def dywan():
    pu()
    goto(-dlug / 2, -dlug / 2)
    pd()
    for _ in range(2):
        kafelek()
        left(90)
        fd(pix * 5)
        right(90)
    left(90)
    fd(-dlug)
    right(90)
    fd(pix * 5)
    for _ in range(2):
        kafelek()
        left(90)
        fd(pix * 5)
        right(90)

tracer(0)
dywan()
update()
done()