from turtle import *
from math import sqrt

dlug_bok = 90
pods_bok = dlug_bok / 3
prze_bok = dlug_bok * sqrt(2)
prze_ele_bok = prze_bok / 6


def troj(pods: int, bok: int, kolor: str) -> None:
    fillcolor(kolor)
    begin_fill()
    forward(pods)
    left(135)
    forward(bok)
    left(90)
    forward(bok)
    left(135)
    end_fill()


def trap(pods: int, bok: int, kolor: str, uklad: int) -> None:
    angles = [45, 135]
    if uklad == 2:
        angles.reverse()
    fillcolor(kolor)
    begin_fill()
    for _ in range(2):
        forward(pods)
        left(angles[0])
        forward(bok)
        left(angles[1])
    end_fill()


def element2() -> None:
    trap(pods_bok, prze_ele_bok, "light blue", 1)

    forward(pods_bok)

    troj(pods_bok, prze_ele_bok, "navy")

    forward(pods_bok)

    trap(pods_bok, prze_ele_bok, "light blue", 2)

    forward(pods_bok)
    left(135)
    forward(prze_ele_bok)
    right(135)
    backward(pods_bok * 2)

    troj(pods_bok * 2, prze_ele_bok * 2, "navy")

    left(45)
    backward(prze_ele_bok)
    right(45)

def element(isElement1) -> None:

    if isElement1:
        kolory = ["navy", "light blue", "light blue", "light blue"]
    else:
        kolory = ["light blue", "navy", "navy", "light blue"]
        

    trap(pods_bok, prze_ele_bok, kolory[0], 1)

    forward(pods_bok)

    troj(pods_bok, prze_ele_bok, kolory[1])

    forward(pods_bok)

    trap(pods_bok, prze_ele_bok, kolory[0], 2)

    forward(pods_bok)
    left(135)
    forward(prze_ele_bok)
    left(45)
    forward(pods_bok)
    left(180)

    penup()

    troj(pods_bok, prze_ele_bok, kolory[2])

    left(180)
    forward(pods_bok)
    left(180)

    troj(pods_bok, prze_ele_bok, kolory[2])

    left(45)
    forward(prze_ele_bok)
    right(45)
    forward(pods_bok)
    left(180)

    troj(pods_bok, prze_ele_bok, kolory[3])

    forward(pods_bok)
    left(180)

    troj(pods_bok, prze_ele_bok, kolory[2])

    pendown()

    right(135)
    forward(prze_ele_bok * 2)
    left(135)




def kwadrat(isSquare1) -> None:
    element(isSquare1)

    left(90)
    forward(dlug_bok)
    right(180)

    element(not isSquare1)

    left(90)
    forward(dlug_bok)
    right(180)

    element(isSquare1)

    left(90)
    forward(dlug_bok)
    right(180)

    element(not isSquare1)

    left(90)
    forward(dlug_bok)
    left(180)

def prostokat(isRecrange1) -> None:
    kwadrat(not isRecrange1)

    left(90)
    forward(dlug_bok)
    right(90)

    kwadrat(isRecrange1)
    
    left(90)
    backward(dlug_bok)
    right(90)

    



def deptak(n: int) -> None:
    penup()
    goto(n * -dlug_bok / 2, -dlug_bok / 2)
    pendown()
    uklad1 = True
    for _ in range(n):
        prostokat(uklad1)
        forward(dlug_bok)
        if uklad1:
            uklad1 = False
        else:
            uklad1 = True


tracer(0)
deptak(5)
update()
done()