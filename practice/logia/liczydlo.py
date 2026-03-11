from turtle import *

grub_pret = 10
dlug_kor = 50
dlug_pix = dlug_kor / 2
x = -(28 * dlug_pix) / 2
y = -(22 * dlug_pix) / 2


def kwad(bok, kolor):
    fillcolor(kolor)
    begin_fill()
    for _ in range(4):
        forward(bok)
        left(90)
    end_fill()

def szablon():
    for _ in range(2):
        for _ in range(28):
            kwad(dlug_pix, "black")
            forward(dlug_pix)
        forward(-dlug_pix * (28 - 1))
        left(90)
        for _ in range(22):
            kwad(dlug_pix, "black")
            forward(dlug_pix)
        goto(-x, -y)
        left(90)
    pu()
    goto(x, y)
    pd()

def koraliki(n):
    left(90)
    forward(dlug_pix - grub_pret)
    right(90)

    begin_fill()
    fillcolor("black")
    for _ in range(2):
        forward((28 - 2) * dlug_pix)
        left(90)
        forward(grub_pret)
        left(90)
    end_fill()

    right(90)
    forward(dlug_pix - grub_pret)
    left(90)

    for i in range(11):
        if i >= 5:
            kolor = "yellow"
        else:
            kolor = "orange"

        if i < n:
            kwad(dlug_kor, kolor)
            forward(dlug_kor)
        elif i == n:
            pu()
            forward(dlug_pix * 6)
            pd()
        else:
            kwad(dlug_kor, kolor)
            forward(dlug_kor)
    pu()
    forward((28 - 2) * -dlug_pix)
    pd()


def ustaw(n):
    pu()
    goto(x, y)
    pd()

    szablon()

    forward(dlug_pix)
    left(90)
    forward(dlug_pix)
    right(90)

    for i in range(7):
        if i < len(str(n)):
            liczba = int(str(n)[::-1][i])
        else:
            liczba = 0
        koraliki(liczba)
        left(90)
        forward(dlug_pix * 3)
        right(90)



tracer(0)
ustaw(7654321)
update()
done()