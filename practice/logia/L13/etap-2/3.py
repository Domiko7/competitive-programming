from math import factorial

def PASCAL(w, p):
    return factorial(w - 1) // (factorial(p - 1) * factorial(w - p))

print(PASCAL(5, 3))
print(PASCAL(10, 7))