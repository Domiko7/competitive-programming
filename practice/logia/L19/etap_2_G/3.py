

def stp(n):

    translator = {
        "Z": 0,
        "J": 1,
        "D": 2,
        "T": 3
    }

    def recursion(n, i=0):
        if i >= len(n):
            return 0, i

        branches = translator[n[i]]
        next = i + 1

        depth = 0
        for _ in range(branches):
            old_depth, next = recursion(n, next)
            depth = max(depth, old_depth)

        return 1 + depth, next

    return recursion(n)[0]







print(stp("TDZZJZJJZ"))
print(stp("JDJDZJDZZZ"))
print(stp("TJJJDZZDZZJZ"))