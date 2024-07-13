import datetime
print("Hello there!")
name = input("What is your name?\n")
age = int(input("How old are you?\n"))
today = datetime.date.today()
current_year = int(today.strftime("%Y"))

if age < 100:
    year = (current_year - age) + 100
    print(name + ", you will turn 100 in the", year, ".")
else:
    print("You are already 100.")