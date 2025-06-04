import sys
import pyperclip
import shelve

# "Usage: python multiclipboard.py save <keyword> - Saves clipboard content to keyword"
# "Usage: python multiclipboard.py <keyword> - Loads clipboard content from keyword"
# "Usage: python multiclipboard.py list - Lists all saved keywords"

mcb_shelf = shelve.open('mcb')

if len(sys.argv) == 3 and sys.argv[1].lower() == 'save':
    # Save clipboard content to a keyword
    keyword = sys.argv[2]
    mcb_shelf[keyword] = pyperclip.paste()
    print(f"Saved clipboard content under keyword '{keyword}'.")
elif len(sys.argv) == 2:
    if sys.argv[1].lower() == 'list':
        # List all keywords
        print("Saved keywords:", list(mcb_shelf.keys()))
    else:
        # Load content from a keyword to clipboard
        keyword = sys.argv[1]
        if keyword in mcb_shelf:
            pyperclip.copy(mcb_shelf[keyword])
            print(f"Copied content for keyword '{keyword}' to clipboard.")
        else:
            print(f"No content found for keyword '{keyword}'.")
else:
    print("Usage:")
    print("  python multiclipboard.py save <keyword> - Saves clipboard content to keyword")
    print("  python multiclipboard.py <keyword>      - Loads clipboard content from keyword")
    print("  python multiclipboard.py list           - Lists all saved keywords")

mcb_shelf.close()