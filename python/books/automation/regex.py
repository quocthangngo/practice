import re

# phoneNumber = re.compile(r'\d\d\d-\d\d\d-\d\d\d\d')
# phoneNumber = re.compile(r'(\d\d\d)-(\d\d\d-\d\d\d\d)')
# mo = phoneNumber.search('My number is 415-555-4242.')
# print(mo.group(1))
# print(mo.group(2))
# print(mo.group(0))
# print(mo.group())

# heroRegex = re.compile(r'Batman|Tina Fey')
# mo = heroRegex.search('Batman and Tina Fey')
# heroRegex = re.compile(r'Bat(man|mobile|copter|bat)')
# mo = heroRegex.search('Batmobile lost a wheel')
# print(mo.group(1))

# The ? makes the preceding character optional
# pattern = re.compile(r'colou?r')
# # Test strings
# test_strings = ['color', 'colour', 'colouur']
# for test_string in test_strings:
#     match = pattern.search(test_string)
#     if match:
#         print(f"'{test_string}' matches")
#     else:
#         print(f"'{test_string}' does not match")

# * means zero or more
# batregex = re.compile(r'Bat(wo)*man')
# mo1 =batregex.search('The Adventures of Batman')
# print(mo1.group())
# mo2 = batregex.search('The Adventures of Batwoman')
# print(mo2.group())
# mo3 = batregex.search('The Adventures of Batwowowowoman')
# print(mo3.group())

# + means one or more
# batregex = re.compile(r'Bat(wo)+man')
# mo1 = batregex.search('The Adventures of Batwoman')
# print(mo1.group())
# mo2 = batregex.search('The Adventures of Batwowowowoman')
# print(mo2.group())
# mo3 = batregex.search('The Adventures of Batman')
# print(mo3 == None)

# {n} means exactly n times
# haRegex = re.compile(r'(Ha){3}')
# mo1 = haRegex.search('HaHaHaHaHa')
# print(mo1.group())
# mo2 = haRegex.search('Ha')
# print(mo2 == None)

# greedy matching
# greedyHaRegex = re.compile(r'(Ha){3,5}')
# mo1 = greedyHaRegex.search('HaHaHaHaHa')
# print(mo1.group())
# nongreedyHaRegex = re.compile(r'(Ha){3,5}?')
# mo2 = nongreedyHaRegex.search('HaHaHaHaHa')
# print(mo2.group())

# findall() method
# phoneNumber = re.compile(r'\d\d\d-\d\d\d-\d\d\d\d')
# mo = phoneNumber.findall('Cell: 415-555-9999 Work: 212-555-0000')
# print(mo)

# character classes
# xmasRegex = re.compile(r'\d+\s\w+')
# mo = xmasRegex.findall('12 drummers, 11 pipers, 10 lords, 9 ladies, 8 maids, 7 swans, 6 geese, 5 rings, 4 birds, 3 hens, 2 doves, 1 partridge')
# print(mo)

# custom character classes
vowelRegex = re.compile(r'[aeiouAEIOU]')
mo = vowelRegex.findall('Robocop eats baby food. BABY FOOD.')
print(mo)

consonantRegex = re.compile(r'[^aeiouAEIOU]')
mo = consonantRegex.findall('Robocop eats baby food. BABY FOOD.')
print(mo)
