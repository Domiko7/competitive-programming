
def uluz_najmniejsza_liczb(n):
    return int("".join(sorted(str(n))))

def uluz_najwieksza_liczb(n):
    return int("".join(sorted(str(n), reverse=True)))

n = int(input())
counter = 0

while True:
    new = uluz_najwieksza_liczb(n) - uluz_najmniejsza_liczb(n)
    if new == n:
        break
    else:
        counter += 1
        n = new
print(counter)