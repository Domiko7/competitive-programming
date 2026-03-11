n = int(input())
slowa = [input() for _ in range(n)]
litery = 'aeiouybcdfghjklmnpqrstvwxz\n'

def klucz(litera):
    return litery.find(litera)

posortowane = [sorted(slowo, key=klucz) for slowo in slowa]

for slowo in posortowane:
    ost = slowo[0]
    ost_count = 0
    for c in range(len(slowo)):
        if ost == slowo[c]:
            ost_count += 1
        else:
            if ost_count > 1:
                print(ost, ost_count, sep='', end='')
            else:
                print(ost, end='')
            ost_count = 1
        ost = slowo[c]
    if ost_count > 1:
        print(ost, ost_count, sep='', end='\n')
    else:
        print(ost, end='\n')