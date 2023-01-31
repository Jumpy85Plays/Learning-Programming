name = input("What is your name?: ")
age = int(input("How old are you?: "))

if name.isalnum():
    print('The name you entered is', name +'. You are', age, 'years old.')
else:
    print("Please enter a valid name.")