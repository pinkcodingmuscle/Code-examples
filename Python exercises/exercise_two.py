#ask user for a number
# if the number is even or odd, print out an appropriate message to use

num = int(input("Enter a number: "))
# if num%2==0:
#     print("This is an even number.")
# if num%4==0:
#     print("This number is a multiple of 4.")
# else:
#     print("This is an odd number")

# ask user for two numbers 
check = int(input("Enter another number: "))

if num%check == 0:
    print(num, "divides evenly into", check, ".")
else:
    print(num, "does not evenly divide into", check, ".")