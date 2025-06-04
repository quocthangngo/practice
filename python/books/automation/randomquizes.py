capitals = {
    "Afghanistan": "Kabul",
    "Albania": "Tirana",
    "Algeria": "Algiers",
    "Andorra": "Andorra la Vella",
    "Angola": "Luanda",
    "Argentina": "Buenos Aires",
    "Armenia": "Yerevan",
    "Australia": "Canberra",
    "Austria": "Vienna",
    "Azerbaijan": "Baku",
    "Bahamas": "Nassau",
    "Bahrain": "Manama",
    "Bangladesh": "Dhaka",
    "Barbados": "Bridgetown",
    "Belarus": "Minsk",
    "Belgium": "Brussels",
    "Belize": "Belmopan",
    "Benin": "Porto-Novo",
    "Bhutan": "Thimphu",
    "Bolivia": "Sucre",
    "Bosnia and Herzegovina": "Sarajevo",
    "Botswana": "Gaborone",
    "Brazil": "Brasília",
    "Brunei": "Bandar Seri Begawan",
    "Bulgaria": "Sofia",
    "Burkina Faso": "Ouagadougou",
    "Burundi": "Gitega",
    "Cambodia": "Phnom Penh",
    "Cameroon": "Yaoundé",
    "Canada": "Ottawa",
    "Cape Verde": "Praia",
    "Central African Republic": "Bangui",
    "Chad": "N'Djamena",
    "Chile": "Santiago",
    "China": "Beijing",
    "Colombia": "Bogotá",
    "Comoros": "Moroni",
    "Congo (Congo-Brazzaville)": "Brazzaville",
    "Costa Rica": "San José",
    "Croatia": "Zagreb",
    "Cuba": "Havana",
    "Cyprus": "Nicosia",
    "Czech Republic": "Prague",
    "Denmark": "Copenhagen",
    "Djibouti": "Djibouti (city)",
    "Dominica": "Roseau",
    "Dominican Republic": "Santo Domingo",
    "Ecuador": "Quito",
    "Egypt": "Cairo",
    "El Salvador": "San Salvador"
}

import random

# create a quizez sheet
def quizes():
    for i in range(35):
        items = list(capitals.items())  # Convert dictionary items to a list of tuples
        random.shuffle(items)           # Shuffle the list of tuples
        shuffled_capitals = dict(items)
        quizes = {}
        for country, capital in shuffled_capitals.items():
            selection = []
            while(True):
                selection = random.sample(list(capitals.values()), 3)
                if capital in selection:
                    pass
                else:
                    # print the shuffled capitals
                    selection.append(capital)
                    random.shuffle(selection)
                    break
            test = {country : {"A)" : selection[0], "B)" : selection[1], "C)" : selection[2], "D)" : selection[3]}}
            quizes.update(test)
        # Write the quizes
        with open(f"Sheet_quizes_{i+1}.txt", "a") as f:
            count = 1
            for country, options in quizes.items():
                f.write(f"Quiz {count}: the capital of {country} is\n")
                count += 1
                for option, capital in options.items():
                    f.write(f"{option} {capital}\n")
                f.write("\n")
        # Write the answers
        with open(f"Sheet_answers_{i+1}.txt", "a") as f:
            count = 1
            for country in quizes.keys():
                f.write(f"Quiz {count}: the capital of {country} is {capitals[country]}\n")
                count += 1

quizes()