
"""
-> collect the input ^
-> convert the string into a 2d array ^
-> convert the key into an array based key ^
-> flip the key and for every character get it from the 2d array ^
"""

def convert_string_arr(string, n):
    arr = [[0 for _ in range(n)] for _ in range(n)]
    for i in range(n * n):
        arr[i // n][i % n] = string[i]
    return arr

def convert_key_arr(key, n):
    arr = [["." for _ in range(n)] for _ in range(n)]
    for i in range(n * n):
        if i + 1 in key:
            arr[i // n][i % n] = "x"
    return arr

def turn_arr_90_degrees(arr):
    arr2 = [["." for _ in range(n)] for _ in range(n)]
    for i in range(len(arr)):
        for j in range(len(arr[0])):
            arr2[j][len(arr) - 1 - i] = arr[i][j]
    return arr2

n = int(input())
pola = set(map(int, input().split()))
napis = input()
#n = 6
#pola = {1, 4, 8, 12, 15, 20, 23, 30, 34}
#napis = "cxrizboeaxwkdwaaajwwgnasikzlezoy.afa"

new_napis = []

for k in range(0, len(napis), n * n):
    fragment =  napis[k:k + n * n]

    converted_napis = convert_string_arr(fragment, n)
    converted_key = convert_key_arr(pola, n)
    for i in range(4):
        for a in range(len(converted_key)):
            for b in range(len(converted_key[a])):
                if converted_key[a][b] == "x":
                    new_napis.append(converted_napis[a][b])
        converted_key = turn_arr_90_degrees(converted_key)

print("".join(new_napis).split(".")[0])
