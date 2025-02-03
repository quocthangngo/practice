# bình phương của các số chẵn trong [1,2,3,4,5,6,7,8,9,10].

# map returns the value
# filter returns the true, false
print(list(map(lambda x: x**2, filter(lambda x: x%2 ==0, [1,2,3,4,5,6,7,8,9,10]))))
