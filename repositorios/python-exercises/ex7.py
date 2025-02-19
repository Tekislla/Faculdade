with open("names.txt", "r", encoding="utf-8") as open_file:
    all_values = open_file.read()
    listNames = all_values.split("\n")
    setNames = set(listNames)

    for name in setNames:
        print(name + ": " + str(listNames.count(name)))