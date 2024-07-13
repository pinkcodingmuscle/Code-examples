import random

def main():   
    a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
    b = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]

    # c = []
    # a = []
    # b = []
    c = []
    n = 15
    # for i in range (n):
    #     a.append(random.randint(1,n))
    #     b.append(random.randint(1,n))
    print("List a ->", a)
    print("List b ->", b)
    
    # for i in a:
    #     for j in b:
    #         if i == j:
    #             if i not in c:
    #                 c.append(i)
    #                 c.sort()       
    
    c = [i for i in a if i in b and i not in c and not c.append(i)]
    print(c)

main()



