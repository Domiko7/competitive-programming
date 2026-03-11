
def ile(n):
    predkosc = 1
    for i in range(1, n):
        if i % 2 == 1:
            predkosc += 3
        else:
            if i % 12 == 0:
                predkosc -= 10
            else:
                predkosc -= 1
    return predkosc

print(ile(4))
print(ile(14))
print(ile(100))

  
