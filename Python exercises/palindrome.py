def main():
    s = input("Enter a word: ").lower()

    if (s[0::] == s[::-1]):
        print(s.upper(), "is a palindrome.")
    else:
        print(s.upper(), "is not a palindrome.")

main()