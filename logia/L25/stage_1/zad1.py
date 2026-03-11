from turtle import *

#https://logia.oeiizk.waw.pl/strony/bankzadan/L25_e1_zad1.pdf
#You can translate the exercise via google translator.

tracer(0, 0)

bok = 50


def rozeta():
    def trojkat(color):
        begin_fill()
        fillcolor(color)
        for _ in range(3):
            forward(bok)
            left(120)
        end_fill()
    
    for _ in range(12):
        left(90)
        forward(bok)
        right(30)
        forward(bok)
        left(120)
        trojkat("tomato")
        forward(bok)
        penup()
        goto(0, 0)
        left(30)
        pendown()
    forward(bok)
    right(30)
    forward(bok)
    left(60)
    for _ in range(12):
        trojkat("olive")
        left(60)
        forward(bok)
        right(30)
    forward(bok)
    right(30)
    for _ in range(12):
        trojkat("orange")
        forward(bok)
        left(180)
        trojkat("orange")
        forward(bok)
        right(30)
        forward(bok)
        right(90)
        forward(bok)
        right(30)
    
rozeta()
penup()
goto(0, 0)
done()
tracer.update()
