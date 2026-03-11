
def ile_bez(a, b):
    if b == 0:
        return 9 ** a
    return 8 * 9 ** (a - 1)

print(ile_bez(1, 4))
print(ile_bez(2, 5))
print(ile_bez(3, 0))