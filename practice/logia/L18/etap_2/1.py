from turtle import *

def koduj(napis):
    szer = 780
    naj_dlug = len(napis) * 1.2 / szer - 1.2
    przerwa = naj_dlug / 5

    pu()
    goto(-szer / 2, -szer / 2)
    pd()

koduj("fghjastuz")
done()