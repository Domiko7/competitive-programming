

def klocki(n):

    base_1 = [1, 5]
    base_2 = [4, 1]
    base_3 = [3, 9]
    base_4 = [2, 9]


    czy_pierwsze = True
    najblizsze = (float("inf"), "I")

    while max(base_1, base_2, base_3, base_4, key=lambda x: x[0])[0] < n:

        for i, v in [("I", base_1), ("II", base_2), ("III", base_3), ("IV", base_4)]:
            if abs(n - v[0]) < najblizsze[0]:
                najblizsze = (abs(n - v[0]), i)

        base_1[0] += base_1[1]
        base_2[0] += base_2[1]
        base_3[0] += base_3[1]
        base_4[0] += base_4[1]

        base_1[1] += 8
        base_3[1] += 8
        base_4[1] += 8

        if czy_pierwsze:
            base_2[1] += 12
            czy_pierwsze = False
        else:
            base_2[1] += 8

    for i, v in [("I", base_1), ("II", base_2), ("III", base_3), ("IV", base_4)]:
        if abs(n - v[0]) < najblizsze[0]:
            najblizsze = (abs(n - v[0]), i)
    return najblizsze[1]



print(klocki(2))
print(klocki(17))
print(klocki(40))

print()

# Grupa I
print(klocki(7))     # I
print(klocki(10))    # IV
print(klocki(13))    # III
print(klocki(16))    # II

# Grupa II
print(klocki(46))    # I
print(klocki(47))    # IV

# Grupa III
print(klocki(333))   # II
print(klocki(334))   # I

# Grupa IV
print(klocki(9019))  # IV
print(klocki(9230))  # II

# Grupa V
print(klocki(9891))  # III
print(klocki(9999))  # II
