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
# vowelRegex = re.compile(r'[aeiouAEIOU]')
# mo = vowelRegex.findall('Robocop eats baby food. BABY FOOD.')
# print(mo)

# consonantRegex = re.compile(r'[^aeiouAEIOU]')
# mo = consonantRegex.findall('Robocop eats baby food. BABY FOOD.')
# print(mo)

# caret and dollar sign characters
# beginsWithHello = re.compile(r'^Hello')
# mo = beginsWithHello.search('Hello world!')
# print(mo.group())
# mo = beginsWithHello.search('He said hello.')
# print(mo == None)

# endsWithNumber = re.compile(r'\d$')
# mo = endsWithNumber.search('Your number is 42')
# print(mo.group())
# mo = endsWithNumber.search('Your number is forty two.')
# print(mo == None)

# wholeStringIsNum = re.compile(r'^\d+$')
# mo = wholeStringIsNum.search('1234567890')
# print(mo.group())
# mo = wholeStringIsNum.search('12345xyz67890')
# print(mo == None)
# mo = wholeStringIsNum.search('12 34567890')
# print(mo == None)

# wildcard character
# atRegex = re.compile(r'.at')
# mo = atRegex.findall('The cat in the hat sat on the flat mat.')
# print(mo)

# dotStar
# nameRegex = re.compile(r'First Name: (.*) Last Name: (.*)')
# mo = nameRegex.search('First Name: Al Last Name: Sweigart')
# print(mo.group(1))
# print(mo.group(2))

# nongtGreedyRegex = re.compile(r'<.*?>')
# mo = nongtGreedyRegex.search('<To serve man> for dinner.>')
# print(mo.group())
# greedyRegex = re.compile(r'<.*>')
# mo = greedyRegex.search('<To serve man> for dinner.>')
# print(mo.group())

# re.DOTALL
# noNewlineRegex = re.compile('.*')
# mo = noNewlineRegex.search('Serve the public trust.\nProtect the innocent.\nUphold the law.')
# print(mo.group())
# newlineRegex = re.compile('.*', re.DOTALL)
# mo = newlineRegex.search('Serve the public trust.\nProtect the innocent.\nUphold the law.')
# print(mo.group())

# re.IGNORECASE
# robocop = re.compile(r'robocop', re.IGNORECASE)
# mo = robocop.search('Robocop is part man, part machine, all cop.')
# print(mo.group())
# mo = robocop.search('ROBOCOP protects the innocent.')
# print(mo.group())
# mo = robocop.search('Al, why does your programming book talk about robocop so much?')
# print(mo.group())

# sub() method
# namesRegex = re.compile(r'Agent \w+')
# mo = namesRegex.sub('CENSORED', 'Agent Alice gave the secret documents to Agent Bob.')
# print(mo)
# agentNamesRegex = re.compile(r'Agent (\w)\w*')
# mo = agentNamesRegex.sub(r'\1****', 'Agent Alice told Agent Carol that Agent Eve knew Agent Bob was a double agent.')
# print(mo)

# verbose mode
phoneRegex = re.compile(r'''(
    (\d{3}|\(\d{3}\))? # area code
    (\s|-|\.)? # separator
    \d{3} # first 3 digits
    (\s|-|\.) # separator
    \d{4} # last 4 digits
    (\s*(ext|x|ext.)\s*\d{2,5})? # extension
)''', re.VERBOSE)
mo = phoneRegex.search('415-555-4242')
print(mo.group())
mo = phoneRegex.search('(415) 555-4242')
print(mo.group())
mo = phoneRegex.search('415 555 4242 ext 12345')
print(mo.group())
mo = phoneRegex.search('415-555-4242 ext 12345')
print(mo.group())
mo = phoneRegex.search('415-555-4242 x12345')
print(mo.group())
mo = phoneRegex.search('415-555-4242 ext. 12345')
print(mo.group())