
def KIEDY(x, y, z):
    goal = 1000
    wys = 0
    days = 0
    while True:
        days += 1
        wys += x
        if wys >= goal:
            return days
        last = (wys // z) * z
        wys = max(wys - y, last)



print(KIEDY(300, 100, 100))
print(KIEDY(5, 3, 2))
