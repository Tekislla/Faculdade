import random

num = random.randint(1, 9)
guess = 0
tries = 0

print("Adivinhe o número entre 1 e 9 que eu estou pensando")

while guess != num and guess != "sair":
    guess = input("Digite um número ou 'sair' para sair: ")

    if guess == "sair":
        break

    guess = int(guess)
    tries += 1

    if guess < num:
        print("O número é maior")
    elif guess > num:
        print("O número é menor")
    
    if guess == num:
        print("Você acertou! O número era " + str(num))
        print("Você tentou " + str(tries) + " vezes")