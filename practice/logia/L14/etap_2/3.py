
def kosp(a, b):
    stacje_a = {a[0]: 0}
    stacje_b = {b[0]: 0}
    total_a = 0
    total_b = 0
    for i in range(1, max(len(a), len(b)), 2):
        if i + 1 < len(a):
            total_a += int(a[i])
            stacje_a[a[i + 1]] = total_a
        if i + 1 < len(b):
            total_b += int(b[i])
            stacje_b[b[i + 1]] = total_b
    stacje_a["centrum"] = total_a + int(a[-1])
    stacje_b["centrum"] = total_b + int(b[-1])
    b2 = set(b)
    similarities = [i for i in stacje_a.keys() if i in b2]
    similarities.append("centrum")
    min_koszt = float("inf")
    for s in similarities:
        min_koszt = min(min_koszt, stacje_a[s] + stacje_b[s])

    return min_koszt



print(kosp("D3E5J8","H3I2E4J6"))
print(kosp("A3T5U6","B4G1Y4"))