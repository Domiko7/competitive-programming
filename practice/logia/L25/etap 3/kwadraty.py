from turtle import *

def kwadrat(pix):
    for _ in range(4):
        fd(pix)/
        left(90)

def rekurencja(pix, ile=5):

    if ile == 0:
        return

    kwadrat(pix)


    rekurencja(pix / 2, ile - 1)

    penup()
    forward(pix / 2)
    left(90)
    forward(pix / 2)
    right(90)
    pendown()

    rekurencja(pix / 2, ile - 1)

    penup()
    left(90)
    backward(pix / 2)
    right(90)
    backward(pix / 2)
    pendown()

def kwadraty(n):
    rekurencja(300, n)

speed(0)
kwadraty(6)
done()