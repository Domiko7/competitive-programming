
def IMD(r, m ,d):
    def czy_leap(rok):
        if r % 4 == 0 and (r % 100 > 0 or r % 400 == 0):
            return True
        return False
    dni = 0
    for i in range(r, 2011):
        dni += 365
        if czy_leap(i):
            dni += 1
    return dni
    
    
    

print(IMD(1998, 6, 14))
print(IMD(1990, 11, 12))
print(IMD(2011, 11, 27))
