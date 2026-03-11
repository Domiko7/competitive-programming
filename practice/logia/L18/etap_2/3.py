
def ilerazy(n, lista):
    counter = 0
    curr = 0
    for i in range(0, len(lista), 2):
        curr += lista[i]
        if n <= curr:
            counter += 1
        curr -= lista[i - 1]
        if n <= curr + lista[i - 1] and n >= curr:
            counter += 1
    
    return counter


print(ilerazy(2, [3, 2]))
print(ilerazy(4, [5, 3, 5, 3, 2, 1]))
print(ilerazy(2, [3, 1, 1, 3]))