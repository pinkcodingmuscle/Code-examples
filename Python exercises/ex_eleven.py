# This file contains a function that asks the user for a number and checks whether it is even or not

def even(num):
    if num % 2 == 0:
        return("This is an even number")
    else:
        return("This is a prime number.")

def main():
    while True:
        user_input = input("Enter a number: ")
        
        if user_input == "q":
            print("Goodbye!")
            break
        else:
            user_input = int(user_input)
            print(even(user_input))

if __name__ == "__main__":
    main()
    