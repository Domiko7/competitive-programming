
def spr(napis):
    para = False
    potwierdzone = 0
    so_far = 0
    for i in range(len(napis)):
        if not para:
            if napis[i] == "a":
                para = True
                potwierdzone = i
            elif napis[i] == "b":
                so_far = potwierdzone
                break
        else:
            if napis[i] == "b":
                para = False
                potwierdzone = i
            elif napis[i] == "a":
                so_far = potwierdzone
                break
        so_far += 1
    return so_far

print(spr("balon"))
print(spr("abrakadabra"))
print(spr("arbuz"))