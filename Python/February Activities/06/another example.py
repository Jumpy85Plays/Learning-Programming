name = input("Enter your name: ")
friend_name = input("Enter your friend's name: ")

if name == friend_name:
    friend = input("Do you and your friend really have the same name? Type yes or no: ")
    friend = str.lower(friend)
    if friend == 'yes':
        print("Having the same name is cool!")
    elif friend == 'no':
        friend_name = input("Enter another name besides your own: ")
        print("Your friend's name is", friend_name +'.')
    else:
        print("You did not enter yes or no.")
else:
    print("Your friend's name is",friend_name + '.')