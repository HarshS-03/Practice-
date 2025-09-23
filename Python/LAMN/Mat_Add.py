A = [[1, 2, 3],
     [3, 4, 5],
     [5, 7, 8]]

B = [[2, 0, 1],
     [1, 2, 2],
     [3, 5, 8]]

rows = len(A)        # number of rows (3)
cols = len(A[0])     # number of columns (3)

# Create result matrix
C = [[0 for _ in range(cols)] for _ in range(rows)]

# Perform addition
for i in range(rows):        # 0 → 2
    for j in range(cols):    # 0 → 2
        C[i][j] = A[i][j] + B[i][j]

# Print result
for row in C:
    print(row)

