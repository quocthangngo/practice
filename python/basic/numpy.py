import numpy as np

m, n = map(int, input().split())
A = np.zeros((m, n))

for i in range(m):
    row = list(map(float,input().split()))
    A[i, :] = row

max_col = np.amax(A, axis=0)
min_col = np.amin(A, axis=0)
print("Giá trị lớn nhất trên mỗi cột:", max_col)
print("Giá trị nhỏ nhất trên mỗi cột:", min_col)

max_val = np.amax(A)
max_idx = np.unravel_index(np.argmax(A), A.shape)
min_val = np.amin(A)
min_idx = np.unravel_index(np.argmin(A), A.shape)
print("Phần tử lớn nhất của mảng A là", max_val, "ở dòng", max_idx[0]+1, "cột", max_idx[1]+1)
print("Phần tử nhỏ nhất của mảng A là", min_val, "ở dòng", min_idx[0]+1, "cột", min_idx[1]+1)

# Tính số phần tử bằng phần tử lớn nhất
count_max = np.count_nonzero(A == max_val)
print("Số phần tử bằng phần tử lớn nhất là:", count_max)