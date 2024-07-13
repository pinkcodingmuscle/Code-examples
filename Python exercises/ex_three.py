import pprint
a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
b = []
# for i in range(len(a)):
#     if i < 5:
#         b = i
#         print(b)

num2 = int(input("Enter a number: "))
# b=[print(i, end=' ') for i in a if i < num2]
# print()

# b = print(a[:] for i in a if i < num2)
# b = [print(' , '.join(a)) for i in a if i < num2]
# b = print([i for i in a if i < num2])
# b = pprint.pprint(i for i in a if i < num2)

print([b.append(i for i in a if i < num2)])