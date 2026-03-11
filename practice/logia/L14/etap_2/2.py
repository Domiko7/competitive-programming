
def poler(tekst):
    offset = [0, 0, 0, 0]
    max_offset = [0, 0, 0, 0]
    for i in tekst:
        if i == "g":
            offset[0] += 1
            offset[1] -= 1
        elif i == "d":
            offset[1] += 1
            offset[0] -= 1
        elif i == "p":
            offset[2] += 1
            offset[3] -= 1
        elif i == "l":
            offset[3] += 1
            offset[2] -= 1
        for j in range(4):
            max_offset[j] = max(max_offset[j], offset[j])


    return (max_offset[0] + max_offset[1]) * (max_offset[2] + max_offset[3])


print(poler("ggdp"))
print(poler("lllgpdddd"))