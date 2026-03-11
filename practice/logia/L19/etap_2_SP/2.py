

def lustro(l, n):
    for i in range(n):
        l = l + int(str(l)[::-1])
        if str(l) == str(l)[::-1]:
            return l
    return -1

print(lustro(125, 3))
print(lustro(91, 2))
print(lustro(91, 1))
print(lustro(100000, 8))