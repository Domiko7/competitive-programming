l1, l2 = input().split()
wynik = 0
for i in range(len(l1)):
    if l1[i] == l2[i]:
        wynik += 10
    elif l1[i] in l2:
        wynik += 1
print(wynik)
