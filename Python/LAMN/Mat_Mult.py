# Matrix multiplication without numpy

# Example matrices
A = [[1,2,3],
     [3,4,5],
     [5,7,8]]

B = [[2,0,1],
     [1,2,2],
     [3,5,8]]

# Get dimensions
rows_A = len(A)
cols_A = len(A[0])
rows_B = len(B)
cols_B = len(B[0])

# Check if multiplication is possible
if cols_A != rows_B:
    print("Matrix multiplication not possible!")
else:
    # Create result matrix with zeros
    C = [[0 for _ in range(cols_B)] for _ in range(rows_A)]

    # Multiply
    for i in range(rows_A):        # row of A
        for j in range(cols_B):    # col of B
            for k in range(cols_A):  # common dimension
                C[i][j] += A[i][k] * B[k][j]

    # Print result
    print("Resultant Matrix:")
    for row in C:
        print(row)
