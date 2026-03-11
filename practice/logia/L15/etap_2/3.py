


"""""""""
def ile(a, b):
    counter = 0
    b2 = str(b)
    koniec = int("1" + ("0" * a))
    poczatek = koniec // 10
    for i in range(poczatek, koniec):
        if b2 in str(i):
            counter += 1
    return counter
"""""""""

def ile(a, b):
    total = 9 * 10 ** (a - 1)
    if b == 0:
        bez = 9 ** a
    else:
        bez = 8 * 9 ** (a - 1)

    return total - bez

        

print(ile(1, 4))
print(ile(2, 5))
print(ile(3, 6))
print(ile(9, 9))