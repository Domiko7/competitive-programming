
#https://logia.oeiizk.waw.pl/strony/bankzadan/L25_e2_zad2.pdf
#You can translate the exercise via google translator.

dolna, gorna = list(map(int, input().split()))
lista = list(map(int, input().split()))
ileZgasla = 0
ileZapalala = 0
zapalona = False
for i in lista:
    if i < dolna and not zapalona:
        ileZapalala += 1
        zapalona =  True
    elif i > gorna and zapalona:
        ileZgasla += 1
        zapalona = False
print(ileZapalala, ileZgasla)
