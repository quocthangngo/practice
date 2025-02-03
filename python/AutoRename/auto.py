import os

def check_if_string_in_file(file_name, string_to_search):
    """ Check if any line in the file contains given string """
    # Open the file in read only mode
    with open(file_name, 'r') as read_obj:
        # Read all lines in the file one by one
        for line in read_obj:
            # For each line, check if line contains the string
            if string_to_search in line:
                return True
    return False

path = "D:\monhoc\hackerrank\\"
arr = os.listdir(path)
for i in range(len(arr)):
    name, extension = os.path.splitext(arr[i])
    if(extension == ".txt"):
        if check_if_string_in_file(path + arr[i], "#include"):
            os.rename(path + arr[i], path + name +".cpp")
        else:
            os.rename(path + arr[i], path + name +".py")

#print(type(arr))
#print(arr)