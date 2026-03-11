
def get_waga(slowo):
    wyn = (len(slowo) // 2) * (len(slowo) // 2 + 1)
    if len(slowo) % 2 == 1:
        wyn += (len(slowo) // 2 + 1)
    for ch in slowo:
        if ch in "aeiouy":
            wyn -= 1
        else:
            wyn += 1
    return wyn

slowa = input().split()

print(*sorted(slowa, key=lambda x: (get_waga(x), x)))
