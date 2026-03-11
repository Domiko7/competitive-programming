

def maksos(ulica):
    osiedla = [[ulica[0]]]
    czy_istnieje = ulica[0] == 1 or ulica[0] == 2 or ulica[0] == 3
    for i in range(1, len(ulica) - 1):
        if ulica[i] - osiedla[-1][-1] <= 3:
            osiedla[-1].append(ulica[i])
        else:
            osiedla.append([ulica[i]])
        if ulica[i] == 1 or ulica[i] == 2 or ulica[i] == 3:
            czy_istnieje = True

    if czy_istnieje:
        osiedla[0].append(ulica[-1])


    return len(max(osiedla, key=lambda x: len(x)))


print(maksos([1,4,7,11,13,14,15,16,20]))
print(maksos([1,4,7,13,14,15,20]))