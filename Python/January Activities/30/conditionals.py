name = input("What is your name?: ")
age = input("How old are you?: ")


if int(age) > 50:
    print("The name you entered is", name +'. You are', age, "years old.")
else:
    print("The name you entered is", name +'. You are', age, "years old and still young.")