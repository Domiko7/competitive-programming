from turtle import *

dlug = 400

def kwadrat(dlug, kolor):
    fillcolor(kolor)
    begin_fill()
    for _ in range(4):
        forward(dlug)
        left(90)
    end_fill()

def odnoga(dlug_pix, n, count=None):
    if count is None:
        count = 1
    if count == n + 1:
        return
    kolory = ["yellow", "green"]
    kwadrat(dlug_pix * count * 2, kolory[count % 2])
    pu()
    forward(dlug_pix * count)
    left(90)
    forward(dlug_pix * count)
    right(90)
    pd()
    return odnoga(dlug_pix, n, count + 1)
def mozaika(n):
    dlug_pix = dlug / (n * (n + 1))
    pu()
    goto(-dlug / 2, -dlug / 2)
    pd()
    odnoga(dlug_pix, n)
    pu()
    goto(dlug / 2, -dlug / 2)
    left(90)
    pd()
    odnoga(dlug_pix, n)
    pu()
    goto(-dlug / 2, dlug / 2)
    left(180)
    pd()
    odnoga(dlug_pix, n)
    pu()
    goto(dlug / 2, dlug / 2)
    left(270)
    pd()
    odnoga(dlug_pix, n)

tracer(0)
mozaika(12)
update()
done()
