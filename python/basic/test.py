# n = int(input())

# result = 0
# for i in range(1, n):
#     result += i/(i+1)

# print(round(result,2))

# recursive
# def fn(n):
#     if n > 0:
#         return fn(n-1) + 100
#     elif n == 0:
#         return 0
    
# n=int(input("Nhập số n>0: "))
# print (fn(n))

# binary seacher
# list is arranged
# li=[2,5,7,9,11,17,222]
# n = int(input())
# def binaryS(li, n):
#     mi = int(len(li) / 2)
#     while(li[mi] != n and mi > 0):
#         if n < li[mi]:
#             li = li[:mi]
#         else:     
#             li = li[mi:]
#         mi = int(len(li) / 2)
#     return mi

# print(binaryS(li, n))

# counting time
# from timeit import Timer
# t = Timer("for i in range(100):1+1")
# print (t.timeit())

# zip function
# chu_ngu=["Anh","Em"]
# dong_tu=["Chơi","Yêu"]
# tan_ngu=["Bóng đá","Xếp hình"]
# # Using zip to combine three lists
# zipped =list(zip(chu_ngu, dong_tu, tan_ngu))
# print(zipped)

# sum Positive and Negative
from re import findall
def positive_negative_sum(str1):
    return sum(map(int, findall(r'\d+', str1))), sum(map(int, findall(r'-\d+', str1)))
str1 = '-100#^sdfkj8902w3ir021@swf-20'
print("Original string:")
print(str1)
print("\nSum of all positive, negative integers present in the said string:")
result = positive_negative_sum(str1)
print("Positive values:",result[0])
print("Negative values:",result[1])