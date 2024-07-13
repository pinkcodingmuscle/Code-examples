def fibonnaci(i):
    c = list()
    if i < 2:
        return c.append(1)
    else:
        for x in range(i):
            return c.append(fibonnaci(c[i-2]) + fibonnaci(c[i-1]))


def main():
    num = int(input("Enter a number: "))
    print(fibonnaci(num))

if __name__ == "__main__":
    main()