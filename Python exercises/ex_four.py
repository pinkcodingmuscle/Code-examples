num1 = int(input("Enter a number: "))

x = range(2, 100)
b = []
for x in range(2, 100):
    if num1%x == 0:
        b.append(x)
print(b)