
def convert_string_arr(string, n):
    arr = [[0 for _ in range(n)] for _ in range(n)]
    for i in range(n * n):
        arr[i // n][i % n] = string[i]
    return arr

def bfs(graf, start, koniec):
    kolejka = [start]
    visited = {start: None}

    while kolejka:
        node = kolejka.pop(0)

        if node == koniec:
            path = []
            while node is not None:
                path.append(node)
                node = visited[node]
            return path[::-1]

        for neighbour in graf[node]:
            if neighbour not in visited:
                visited[neighbour] = node
                kolejka.append(neighbour)


path = input()
graf = {}
columns = int(len(path) ** 0.5)

path_arr = convert_string_arr(path, columns)

##for i in range(len(path) - 1):
##    if path[i] == "S" and path[i + 1] == "S":
##        graf[i].add(i + 1)
##        graf[i + 1].add(i)

sasiedzi = [
             (-1, 0),
    (0, -1),          (0, 1),
              (1, 0)
]

malgosia = None
jas = None

for i in range(columns):
    for j in range(columns):
        if path_arr[i][j] != "X":
            for sas in sasiedzi:
                x = j + sas[0]
                y = i + sas[1]
                if 0 <= x < columns and 0 <= y < columns and path_arr[x][y] != "X":
                    if f"{i}|{j}" not in graf:
                        graf[f"{i}|{j}"] = set()
                    if f"{x}|{y}" not in graf:
                        graf[f"{x}|{y}"] = set()
                    graf[f"{i}|{j}"].add(f"{x}|{y}")
                    graf[f"{x}|{y}"].add(f"{i}|{j}")
            if path_arr[i][j] == "M":
                malgosia = f"{i}|{j}"
            elif path_arr[i][j] == "J":
                jas = f"{i}|{j}"


wyn = bfs(graf, malgosia, jas)

if wyn:
    converted_wyn = []
    old_x, old_y = -1, -1
    for i in range(len(wyn)):
        if old_x != -1:
            x, y = map(int, wyn[i].split("|"))

            if x > old_x:
                converted_wyn.append("G")
            elif old_x > x:
                converted_wyn.append("D")
            elif y > old_y:
                converted_wyn.append("P")
            elif old_y > y:
                converted_wyn.append("L")

            old_x, old_y = x, y
        else:
            old_x, old_y = map(int, wyn[i].split("|"))
    print("".join(converted_wyn))
else:
    print(-1)