from turtle import *
from math import sqrt

def kwadrat(pix, kolor):
    begin_fill()
    fillcolor(kolor)

    for _ in range(4):
        fd(pix)
        left(90)

    end_fill()

def trojkat_1(pix, kolor):
    begin_fill()
    fillcolor(kolor)

    for _ in range(3):
        fd(pix)
        left(120)

    end_fill()

def trojkat_2(pix, kolor):
    begin_fill()
    fillcolor(kolor)

    fd(pix)
    left(90)
    fd(pix)
    left(150)
    fd(pix)
    right(120)
    fd(pix)
    left(150)
    fd(pix)
    left(90)

    end_fill()

def trojkat_3(pix, kolor):
    begin_fill()
    fillcolor(kolor)

    fd(pix)
    left(90)
    fd(pix)
    left(135)
    fd(sqrt(2) * pix)
    left(135)

    end_fill()

def trojkat_4(pix, kolor):
    begin_fill()
    fillcolor(kolor)

    fd(pix)
    left(135)
    fd(sqrt(2) * pix)
    left(135)
    fd(pix)
    left(90)

    end_fill()

def schemat(lista):
    pix = 50

    pu()
    goto(-pix * len(lista) / 2, 0)
    pd()

    for i in range(len(lista)):
        lewy_sas = lista[i - 1]
        teraz = lista[i]
        if i == len(lista) - 1:
            prawy_sas = lista[0]
        else:
            prawy_sas = lista[i + 1]

        for j in range(teraz):
            kwadrat(pix, "dark green")
            left(90)
            fd(pix)
            right(90)

        if teraz > lewy_sas and teraz > prawy_sas:
            trojkat_1(pix, "light gray")
        elif teraz < lewy_sas and teraz < prawy_sas:
            trojkat_2(pix, "light gray")
        elif teraz >= lewy_sas and teraz < prawy_sas:
            trojkat_3(pix, "light gray")
        elif teraz < lewy_sas and teraz >= prawy_sas:
            trojkat_4(pix, "light gray")

        left(90)
        fd(-pix * teraz)
        right(90)
        fd(pix)




speed(0)
schemat([2, 4, 5, 3, 2, 4, 2])
#schemat([5, 4, 4, 3, 3])
#schemat ([1, 9, 8, 7, 6, 5, 4, 3, 2, 1])
#schemat([4, 4, 4])
#schemat([1, 2, 3, 2, 1])
done()