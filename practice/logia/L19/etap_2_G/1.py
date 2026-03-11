from turtle import *

def kwadrat(pix, kolor, kolor2):
    begin_fill()
    fillcolor(kolor)
    pencolor(kolor2)

    for _ in range(4):
        fd(pix)
        left(90)

    end_fill()

def kawalek(pix, kolumny, do):
    for i in range(kolumny):
        if i in do:
            kwadrat(pix, "black", "light gray")
        else:
            kwadrat(pix, "white", "light gray")
        pu()
        fd(pix)
        pd()
    fd(-pix * kolumny)


def kod(n):
    wys = 468
    do_zamalowania = {}
    teraz = 0
    kolumny = 0
    ost = False
    for i, w in enumerate(n):
        if not ost:
            if w.isdigit():
                temp = w
                if n[i + 1].isdigit():
                    temp += n[i + 1]
                    ost = True
                teraz = int(temp)
                do_zamalowania[teraz] = set()
            else:
                do_zamalowania[teraz].add(ord(w) - ord("A"))
                kolumny = max(kolumny, ord(w) - ord("A") + 1)
        else:
            ost = False
    pix = wys / len(do_zamalowania)
    print(do_zamalowania)

    pu()
    goto(-pix * kolumny / 2, wys / 2)
    pd()

    for i in do_zamalowania.values():
        kawalek(pix, kolumny, i)
        pu()
        left(90)
        fd(-pix)
        right(90)
        pd()



speed(0)
#kod("1CD2BDE3AD4BCD6BCE7CD8AC")
kod("1BCDEFG2AH3BDEG4CF5DE6DEG7BCDEFG8BDE9DE10CF11CF12BCEF")
done()