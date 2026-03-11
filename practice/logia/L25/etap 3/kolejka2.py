
def bfs(graf, start):
    visited = set()
    visited.add(start)
    kolejka = [start]

    while kolejka:
        node = kolejka.pop(0)
        for i in graf[node]:
            if i not in visited:
                visited.add(i)
                kolejka.append(i)

def bfs_sciezka(graf, start, cel):
    kolejka = [start]
    rodzice = {start: None}

    while kolejka:
        node = kolejka.pop(0)

        if node == cel:
            sciezka = []
            while node is not None:
                sciezka.append(node)
                node = rodzice[node]
            return sciezka[::-1]

        for i in graf[node]:
            if i not in rodzice:
                rodzice[i] = node
                kolejka.append(i)

# Graf reprezentujący połączenia między miastami/punktami
graf = {
    'A': ['B', 'C'],
    'B': ['A', 'D', 'E'],
    'C': ['A', 'F'],
    'D': ['B'],
    'E': ['B', 'F'],
    'F': ['C', 'E']
}

# Test zwykłego BFS (odwiedzanie wszystkich węzłów)
print("Kolejność odwiedzin:")
bfs(graf, 'A') # Powinno wypisać wierzchołki warstwami

# Test BFS ze ścieżką
start, cel = 'A', 'F'
wynik = bfs_sciezka(graf, start, cel)

if wynik:
    print(f"Najkrótsza droga z {start} do {cel}: {' -> '.join(wynik)}")
else:
    print("Nie znaleziono drogi.")