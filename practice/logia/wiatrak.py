from turtle import *

b_c = 250 / 10
b_z = 125 / 10

def troj_p(b, color):
    if color == 'red':
        w1 = 90
        w2 = 135
    else:
        w1 = -90
        w2 = -135
    fillcolor(color)
    begin_fill()
    fd(b)
    right(w1)
    fd(b)
    right(w2)
    fd(b * (2 ** 0.5))
    end_fill()
    right(w2)
    
def flaga(b, color):
    fd(4 * b)
    troj_p(b, color)
    fd(3 * b)
    left(180)
    troj_p(2 * b, color)
    left(180)
    troj_p(3 * b, color)
    fd(7 * -b)
    

def wiatrak():
    for _ in range(6):
        flaga(b_z, 'dark green')
        left(30)
        flaga(b_c, 'red')
        left(30)

tracer(0)
wiatrak()
update()
done()
