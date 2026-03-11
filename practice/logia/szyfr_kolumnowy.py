
napis, klucz = input().split()
posortowany_klucz = list(sorted(klucz))
klucz_liczby = [0] * len(klucz)
for i in range(len(klucz)):
    index_litera_t = posortowany_klucz.index(klucz[i])
    posortowany_klucz[index_litera_t] = None
    klucz_liczby[i] = index_litera_t + 1
counter_l = 1
tabela = {}
for i in range(len(napis)):
    if counter_l in tabela:
        tabela[counter_l].append(napis[i])
    else:
        tabela[counter_l] = [napis[i]]
    if counter_l == len(klucz):
        counter_l = 1
    else:
        counter_l += 1
for i in klucz_liczby:
    if i in tabela:
        print("".join(tabela[i]), end="")