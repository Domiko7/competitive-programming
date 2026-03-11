
def ile(strony):
    counter = 0
    for i in range(1, strony + 1):
        if '13' in str(i):
            counter += 2
    return counter
print(ile(15))
print(ile(199))
