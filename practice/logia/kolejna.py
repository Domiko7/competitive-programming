
def kolejna(x, y):
    while y > 0:
        x += 1
        if '3' not in str(x):
            y -= 1
    return x

print(kolejna(28, 5))
print(kolejna(299, 9))
