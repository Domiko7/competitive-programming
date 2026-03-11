
def czy_pierwsza(l):
    if l < 2:
        return False
    for i in range(2, int(l ** 0.5) + 1):
        if l % i == 0:
            return False
    return True

def o6(n):
    sprawdzone = {}
    i = n - 1
    while True:
        if i not in sprawdzone:
            sprawdzone[i] = czy_pierwsza(i)
        if i - 6 not in sprawdzone:
            sprawdzone[i - 6] = czy_pierwsza(i - 6)
        if sprawdzone[i] and sprawdzone[i - 6]:
            return i
        i -= 1

print(o6(100))
print(o6(31))
print(o6(10000))
