name = ""

while True:
    name = input("Enter a one-word name, friends use to greet you: ")
    if name.isalpha():
        print("\nGood to see you", name.title())
        break
    else:
        print("\nSorry, enter one-word names only.")