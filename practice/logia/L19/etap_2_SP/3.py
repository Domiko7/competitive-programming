
def znajdz_index(a, b):
    alfabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ"
    counter = 0
    start = False
    for i in alfabet:
        if start:
            counter += 1
        elif i == b:
            start = True
        if i == a and start:
            return counter

def deszyfr(szyfrogram, klucz):
    alfabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    wynik = []
    for i, l in enumerate(szyfrogram):
        wynik.append(alfabet[znajdz_index(l, klucz[i % len(klucz)])])
    return "".join(wynik)


print(deszyfr("ZZGUAVCZI", "LOGIA"))
print(deszyfr("CGSMURRBO", "KRET"))
print(deszyfr("CASETHREYISADUMBASS", "DOMIKO"))