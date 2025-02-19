list_1 = []
list_2 = []
choice = 0

while choice != "parar":
    choice = input("Digite um item para adicionar à lista ou digite 'parar' para parar: ")
    if choice != "parar":
        list_1.append(choice)

itens_set = set(list_1)
list_2 = list(itens_set)
    
print(list_2)