n = input()
posortowane = sorted(n)
dwu = []
jedno = []
counted = {}
last = ''
for i in posortowane:
    if last != i:
        counted[i] = 1
    else:
        counted[i] += 1
    last = i
for i, j in counted.items():
    if j % 2 == 0:
        for k in range(0, j, 2):
            dwu.append(i)
    else:
        for k in range(0, j - 1, 2):
            dwu.append(i)
        jedno.append(i)
dwu_str = ''.join(dwu)
if len(jedno) > 0:
    print(dwu_str + jedno[0] + dwu_str[::-1])
else:
    print(dwu_str + dwu_str[::-1])
