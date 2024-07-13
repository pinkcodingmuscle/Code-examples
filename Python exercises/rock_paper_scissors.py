import sys

WELCOME_MESSAGE  = "Welcome to the rock, paper and scissors game."
CHOICE = "Enter r for rock, p for paper and s for scissors and q to quit: "
PLAYER_ONE = "Enter your choice player one: "
PLAYER_TWO = "Enter your choice player two: "


def rock_paper_scissors(u1, u2):
        
    if u1 == "r" and u2 == "r" or  u1 == "p" and u2 == "p" or  u1 == "s" and u2 == "s":
        return("Its a tie")
    
    elif u1 == "r":
        if u2 == "s":
            return("Rock wins")
        else:
            return("Paper wins")

    elif u1 == "s":
        if u2 == "p":
            return("Scissors wins")
        else:
            return("Rock wins")
        
    elif u1 == "p":
        if u2 == "r":
            return("Paper wins")
        else:
            return("Scissors wins")
    else:
        return("Invalid input. Please try again!")
        sys.exit()

        
def main():
    print("-"*60)
    print(WELCOME_MESSAGE)
    # play = input("Would you like to play? ")
    print(CHOICE)
    
    
    while True:
        player_one = input(PLAYER_ONE).lower()
        player_two = input(PLAYER_TWO).lower()

        print(rock_paper_scissors(player_one, player_two))
        if str(input("Would you like to start a new game? ")) == "yes":
            continue
        else:
            print("Game over. Goodbye!")
            break

        

    print("-"*60)

main()