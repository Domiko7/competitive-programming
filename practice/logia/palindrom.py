
napis = input()
czy_ma_srodek = True
srodek = ""
polowa = ""
posortowany_napis = sorted(set(napis))

for c in posortowany_napis:
    policzone = napis.count(c)
    if policzone > 1:
        polowa += c * (policzone // 2)
        policzone -= policzone // 2 * 2
    if policzone == 1 and czy_ma_srodek:
        srodek = c
        czy_ma_srodek = False
wyjscie = polowa + srodek + polowa[::-1]
print(wyjscie)

