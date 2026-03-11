
def neon(lista):
    maks = -1
    for i in range(len(lista)):
        for j in range(i + 1, len(lista)):
            maks = max(maks, lista[i] + lista[j] + ((j - i) * 2))
    return maks

print(neon([10, 4, 5, 7, 1, 4, 1]))
print(neon([1, 10, 1]))