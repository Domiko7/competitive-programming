napis = input()
cel = 'papadam'
curr = 0
counter = 0
for c in napis:
    if curr == len(cel) - 1:
        curr = 0
        counter += 1
    elif cel[curr] == c:
        curr += 1
print(counter)