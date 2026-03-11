n = input()
j = 0
slowo = "papadam"
counter = 0
for i in n:
    if i == slowo[j]:
        j += 1
    if j == len(slowo):
        counter += 1
        j = 1
print(counter)