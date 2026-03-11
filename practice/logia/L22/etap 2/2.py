a, b = input().split()
counter_a = [0] * 27
counter_b = [0] * 27
wyn = sum([9 for i, j in zip(a, b) if i == j])
for i in range(max(len(a), len(b))):
    if i < len(a):
        counter_a[ord(a[i]) - 97] += 1
    if i < len(b):
        counter_b[ord(b[i]) - 97] += 1

for i, j in zip(counter_a, counter_b):
    wyn += min(i, j)

print(wyn)