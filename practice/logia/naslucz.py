a, b = input().split()
wow_sygnaly = 0
ooo_sygnaly = 0
a_occ = {}
b_occ = {}
for i in range(max(len(a), len(b))):
    if i < len(a):
        a_occ[a[i]] = a_occ.get(a[i], 0) + 1
    if i < len(b):
        b_occ[b[i]] = b_occ.get(b[i], 0) + 1
for i in range(min(len(a), len(b))):
    if a[i] == b[i]:
        wow_sygnaly += 10
for i, j in a_occ.items():
    if i in b_occ:
        ooo_sygnaly += min(j, b_occ[i])
print(wow_sygnaly + ooo_sygnaly - wow_sygnaly // 10)