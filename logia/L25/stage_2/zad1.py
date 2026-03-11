from turtle import *

#https://logia.oeiizk.waw.pl/strony/bankzadan/L25_e2_zad1.pdf
#You can translate the exercise via google translator.


def tarasy(n):
    penup()
    goto(-300, -150)
    pendown()
    def czyParzysta(liczba):
        if liczba % 2 == 0:
            return  True
        return False

    def ileLewoIlePrawo(napis):
        napis = ' '.join(input()).split()
        for i in napis:
            if czyParzysta(int(i)):
                lewo += 1
            else:
                prawo += 1

    def schodek(dlugosc, kierunek):
        if kierunek == True:
            left(90)
            forward(dlugosc)
            right(90)
            forward(dlugosc)
        else:
            right(90)
            forward(dlugosc)
            left(90)
            forward(dlugosc)
    n = str(n)
    lewo = 0
    prawo = 0
    for i in n:
        if czyParzysta(int(i)):
            lewo += 1
        else:
            prawo += 1
    for i in range(lewo):
        schodek(300/(lewo+1), True)
    goto(0, 150)
    left(180)
    penup()
    goto(-300, -150)
    pendown()
    goto(300, -150)
    for i in range(prawo):
        schodek(300/(prawo+1), False)
    goto(0, 150)
speed(0)
tarasy(int(input()))

