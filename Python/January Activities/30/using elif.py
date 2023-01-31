name = input("What is your name?: ")
age = int(input("How old are you?: "))

if age < 18:
    print("The name you entered is", name +'. You are', age, "years old my child.")
elif age >= 18 and age < 30:
    print("The name you entered is", name +'. You are', age, "years old young adult.")
elif age >= 30 and age < 50:
    print("The name you entered is", name +'. You are', age, "years old. This is middle age.")
elif age >= 50:
    print("The name you entered is", name +'. You are', age, "years old and very wise.")
