word = input("Digite uma palavra: ")

if word == word[::-1]:
    print("A palavra é palíndroma")
else:
    print("A palavra não é palíndroma")