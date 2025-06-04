import os

# print(os.getcwd())
# os.chdir('python/books/automation')
# print(os.getcwd())

# print(os.path.abspath('.'))
# print(os.path.isabs('.'))
# print(os.path.isabs(os.path.abspath('.')))
# print(os.path.relpath('/home/quoc/works/practice/python', '/home/quoc/works'))
# print(os.path.basename('/home/quoc/works/practice/python'))
# print(os.path.dirname('/home/quoc/works/practice/python'))
# print(os.path.split('/home/quoc/works/practice/python'))

# import shelve

# # Open a shelve file
# with shelve.open('mydata') as db:
#     # Store data
#     db['name'] = 'Alice'
#     db['age'] = 30
#     db['hobbies'] = ['reading', 'cycling']

#     # Retrieve data
#     print(db['name'])  # Output: Alice
#     print(db['age'])   # Output: 30
#     print(db['hobbies'])  # Output: ['reading', 'cycling']

#     db['name'] = 'Quoc'
#     db['age'] = 30
#     db['hobbies'] = ['reading', 'cycling']
#     print(db['name'])

from pprint import pprint, pformat

data = {
    "name": "Alice",
    "age": 30,
    "hobbies": ["reading", "cycling", "swimming"],
    "address": {
        "city": "New York",
        "zip": "10001",
        "coordinates": {"lat": 40.7128, "long": -74.0060},
    },
}

pprint(data)
formatted_data = pformat(data)
print(formatted_data)