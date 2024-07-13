import random

def first_and_last(l):
    c = []
    for i in l:
        if i == l[0] or i == l[-1]:
            # first = l[0]
            # last = l[len(l)-1]
            c.append(i)
    # return [first,last]
    return c

def main():
    num_list = random.sample(range(100), 5)
    print(num_list)
    print(first_and_last(num_list))

if __name__ == "__main__":
    main()