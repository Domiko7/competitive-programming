n = input()
maks = -float('inf')
for i in range(len(n) - 2):
    l = int(n[i]) * int(n[i + 1]) * int(n[i + 2])
    maks = max(maks, l)
print(maks)
