from turtle import *

def kwad(bok, kolor):
    fillcolor(kolor)
    begin_fill()
    for _ in range(4):
        fd(bok)
        left(90)
    end_fill()

def curved_kwad(pix, kolor):
    fillcolor(kolor)
    begin_fill()
    if kolor == 'tomato':
        a = 45
        b = 135
    else:
        a = 135
        b = 45
    for _ in range(2):
        fd(pix * 5)
        left(a)
        fd(pix * 2 * (2 ** 0.5))
        left(b)
    end_fill()

def domek(pix):
    kwad(pix * 5, 'yellow')
    pu()
    fd(pix)
    left(90)
    fd(pix)
    right(90)
    pd()
    kwad(pix, 'light blue')
    pu()
    left(90)
    fd(pix * 2)
    right(90)
    pd()
    kwad(pix, 'light blue')
    pu()
    fd(pix * 2)
    pd()
    kwad(pix, 'light blue')
    pu()
    right(90)
    fd(pix * 2)
    left(90)
    pd()
    kwad(pix, 'light blue')
    pu()
    fd(-pix * 3)
    left(90)
    fd(pix * 4)
    right(90)
    pd()
    curved_kwad(pix, 'tomato')
    fd(pix * 5)
    right(90)
    curved_kwad(pix, 'gray')
    fd(pix * 5)
    left(90)
    fd(-pix * 5)

def domki(n):
    fasada = 100
    pix = fasada // 5
    pu()
    goto(((-pix * 5 * n) - (pix * 2 * (2 ** 0.5)) * 1.5) / 2, -pix * 9 // 2)
    pd()
    for i in range(1, n + 1):
        domek(pix)
        pu()
        if i % 2 == 1:
            fd(pix * 5)
            left(45)
            fd(pix * 2 * (2 ** 0.5))
            right(45)
        else:
            fd(pix * 5)
            left(45)
            fd(-pix * 2 * (2 ** 0.5))
            right(45)
        pd()
            

tracer(0)
domki(5)
update()
done()
