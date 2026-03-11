napis = input()
alfabet = "aąbcćdeęfghijklłmnńoóprsśtuwyzźż"
pierwsza = float("inf")
ostatnia = 0

for litera in napis:
    index = alfabet.find(litera)
    pierwsza = min(pierwsza, index)
    ostatnia = max(ostatnia, index)


print(alfabet[pierwsza], alfabet[ostatnia], ostatnia - pierwsza)