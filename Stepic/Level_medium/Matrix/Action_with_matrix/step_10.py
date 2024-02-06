n, m = [int(i) for i in input().split()]
matrix = [[int(i) for i in input().split()] for _ in range(n)]

input()

n2, m2 = [int(i) for i in input().split()]
matrix2 = [[int(i) for i in input().split()] for _ in range(n2)]

matrix_result = [[0 for _ in range(m2)] for _ in range(n)]

for index in range (m):
    matrix[i][index]*matrix2[index][j]

for row in matrix_result:
    print(*row, sep=" ")