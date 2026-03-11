from turtle import *

def kwad(pix, kolor):
    fillcolor(kolor)
    begin_fill()
    for _ in range(4):
        fd(pix)
        left(90)
    end_fill()

def ciezarek(pix):
    left(90)
    fd(pix * 1.5)
    fd(-pix * 3)
    fd(pix * 1.5)
    right(90)
    fd(pix / 2)
    left(90)
    fd(pix * 1)
    fd(-pix * 2)
    fd(pix * 1)
    right(90)
    fd(pix / 2)
    left(90)
    fd(pix * 0.5)
    fd(-pix * 1)
    fd(pix * 0.5)
    right(90)
    fd(pix * 6)
    left(90)
    fd(pix * 0.5)
    fd(-pix * 1)
    fd(pix * 0.5)
    right(90)
    fd(pix / 2)
    left(90)
    fd(pix * 1)
    fd(-pix * 2)
    fd(pix * 1)
    right(90)
    fd(pix / 2)
    left(90)
    fd(pix * 1.5)
    fd(-pix * 3)
    fd(pix * 1.5)
    right(90)
    fd(-pix * 8)

def czlowiek(pix, czy_do_gory):
    if czy_do_gory:
        isc = pix * 2
    else:
        isc = -pix * 2
    
    fd(pix)
    left(90)
    fd(pix * 2)
    right(90)
    fd(pix * 2)
    left(90)
    fd(-pix * 2)
    right(90)
    fd(pix)
    fd(-pix)
    left(90)
    fd(pix * 2)

    kwad(pix * 2, 'olive')

    fd(pix * 2)
    right(90)
    fd(pix)
    left(90)
    fd(isc)
    fd(-isc)
    right(90)

    fd(-pix * 4)
    left(90)
    fd(isc)
    fd(-isc)
    right(90)
    fd(pix * 1.5)
    kwad(pix, 'yellow')

    fd(-pix / 2)

    left(90)
    fd(-pix * 4)
    right(90)
    fd(-pix)

    if czy_do_gory:
        pu()
        fd(-pix  * 2)
        left(90)
        fd(pix * 6)
        right(90)
        pd()
        ciezarek(pix)
        pu()
        left(90)
        fd(-pix * 6)
        right(90)
        fd(pix  * 2)
        pd()
    else:
        pu()
        fd(-pix  * 2)
        left(90)
        fd(pix * 1.5)
        right(90)
        pd()
        ciezarek(pix)
        pu()
        left(90)
        fd(-pix * 1.5)
        right(90)
        fd(pix  * 2)
        pd()
    

            

def atleci(n):
    szer = 760
    pix = szer / ((9 * n) - 1)
    pu()
    goto(-szer / 2, -pix * 7.5 / 2)
    fd(pix * 2)
    pd()
    for i in range(1, n + 1):
        if i % 2 == 1:
            czlowiek(pix, False)
        else:
            czlowiek(pix, True)
        pu()
        fd(pix * 9)
        pd()
    pu()
    goto(0, 0)

tracer(0)
atleci(3)
atleci(10)
update()
done()
