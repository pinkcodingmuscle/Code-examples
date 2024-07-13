import random

def guess_num():
    c = 0
    num = random.randint(1,9)
    guess = 0
    
    # ask user to guess number

    while guess != "exit" and guess != num:
        if guess == "exit":
            print("Thank you for playing! Goodbye!")
            break

        guess = input("Enter a number between 1 and 9: ")

        guess = int(guess)
        c += 1

        if guess < num:
            print("Too low")
        elif guess > num:
            print("Too high")
        else:
            print("You guessed right!")
            print("It only took you", c, "tries")
guess_num()