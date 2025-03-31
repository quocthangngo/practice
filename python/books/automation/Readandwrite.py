import os

# print(os.getcwd())
# os.chdir('python/books/automation')
# print(os.getcwd())

print(os.path.abspath('.'))
print(os.path.isabs('.'))
print(os.path.isabs(os.path.abspath('.')))
# print(os.path.relpath('/home', '/'))
