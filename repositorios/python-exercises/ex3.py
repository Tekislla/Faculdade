def win(player):
    print("Jogador " + player + " venceu")
    continuePlaying()

def continuePlaying():
    continuePlaying = input("Continuar jogando? (s/n)")
    if continuePlaying == "n" or continuePlaying == "N":
        quit()
    else:
        startGame()

def startGame():
    while True:
        player1 = input("P1: Digite 1 para pedra, 2 para papel ou 3 para tesoura: ")
        player2 = input("P2: Digite 1 para pedra, 2 para papel ou 3 para tesoura: ")
        
        if player1 == player2:
            print("Empate")
        elif player1 == "1" and player2 == "3":
            win("1")
            continuePlaying()
        elif player1 == "2" and player2 == "1":
            win("1")
            continuePlaying()
        elif player1 == "3" and player2 == "2":
            win("1")
            continuePlaying()
        else:
            win("2")
            continuePlaying()

startGame()