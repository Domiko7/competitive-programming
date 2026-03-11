
def irs(n):
    i = 0
    k = 0
    while k <= n:
        str_i = str(i)
        sum_l = int(str_i[0])
        ilo_l = int(str_i[0])
        for j in range(1, len(str_i)):
            int_i = int(str_i[j])
            sum_l += int_i
            ilo_l *= int_i
        if sum_l == ilo_l:
            k += 1
        i += 1
    return i - 1

print(irs(5))
print(irs(11))
print(irs(69))
print(irs(98))
