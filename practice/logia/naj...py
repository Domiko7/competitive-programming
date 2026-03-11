alf = "aąbcćdeęfghijklłmnńoóprsśtuwyzźż"
napis = sorted(input(), key=lambda l: alf.find(l))
najw = napis[0]
najp = napis[-1]
odl = alf.find(najp) - alf.find(najw)
print(najw, najp, odl)