import numpy as np
import random
matrix_8x8 = np.random.randint(0,100,size=(8,8))
for i in range(8):
    for j in range(8):
        print(matrix_8x8[i][j], end = " ")
    print()
print("Smallest number in matrix")
np.min(matrix_8x8)
r1 = 0; r2 = 2
m1 = matrix_8x8[r1:r2, 0:2]
print(m1)
print("Minimum no:")
np.min(m1)
