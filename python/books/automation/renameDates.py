import re, os, shutil

# Regex to match American-style dates (MM-DD-YYYY or MM/DD/YYYY)
date_pattern = re.compile(r'''
    (0?[1-9]|1[0-2])      # Month: 1-9 or 01-09 or 10-12
    [\-\/]                # Separator: - or /
    (0?[1-9]|[12][0-9]|3[01]) # Day: 1-9, 01-09, 10-29, 30, 31
    [\-\/]                # Separator: - or /
    (\d{4})               # Year: 4 digits
''', re.VERBOSE)

files = os.listdir('.')

for filename in files:
    if date_pattern.search(filename):
        month, day, year = re.match.groups()
        # Build new filename with European style (DD-MM-YYYY)
        european_date = f"{day}-{month}-{year}"
        # Replace the American date with the European date in the filename
        new_filename = date_pattern.sub(european_date, filename)
        shutil.move(filename, new_filename)
        print(f"Renamed '{filename}' to '{new_filename}'")
    else:
        print(f"No date found in '{filename}'")