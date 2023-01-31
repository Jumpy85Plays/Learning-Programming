def add_numbers():
    num1 = input("Enter a number: ")
    num2 = input("Enter a second number: ")
    num3 = int(num1) + int(num2)
    return num3

print("Welcome to Magic!")
print("The sum of the two numbers is", str(add_numbers()) +'.')
