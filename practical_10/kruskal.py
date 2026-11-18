import sys


tokens = []


def read_int():
    global tokens
    while not tokens:
        line = sys.stdin.readline()
        if not line:
            raise EOFError("Expected more integer input.")
        tokens.extend(line.split())
    return int(tokens.pop(0))


def main():
    print("Enter number of vertices: ", end="", flush=True)
    n = read_int()

    print("Enter cost adjacency matrix (0 for no edge):")
    cost = []
    for _ in range(n):
        row = [read_int() for _ in range(n)]
        cost.append([float("inf") if value == 0 else value for value in row])

    parent = list(range(n))
    edges = 0
    total = 0

    print("\nEdges in Minimum Spanning Tree:")
    while edges < n - 1:
        minimum = float("inf")
        a = b = -1

        for i in range(n):
            for j in range(n):
                if cost[i][j] < minimum:
                    minimum = cost[i][j]
                    a, b = i, j

        if a == -1:
            break

        i = a
        while parent[i] != i:
            i = parent[i]

        j = b
        while parent[j] != j:
            j = parent[j]

        if i != j:
            print(f"{a} - {b} : {minimum}")
            total += minimum
            parent[j] = i
            edges += 1

        cost[a][b] = float("inf")
        cost[b][a] = float("inf")

    if edges == n - 1:
        print(f"Minimum cost = {total}")
    else:
        print("Graph is not connected.")


if __name__ == "__main__":
    main()
