
def bieg(n):
    s = str(n)[::-1]
    counter = 0
    for i in range(1, len(s)):
        if s[i] == s[i-1]:
            counter += 1
    return counter
print(bieg(653327778))
print(bieg(1335544544))
