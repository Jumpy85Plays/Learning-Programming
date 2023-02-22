# Name: Gabriel F. Aguilar
# Program Description: Write a program that asks the user to enter two numbers. 
# Using if statements, compare the numbers and tell the user the result. (Is num1 greater than, less than, or equal to num2?)

#Code:
num1 = int(input("Please enter a number: "))
num2 = int(input("Please enter a second number: "))

if num1 > num2 :
    print("The first number you entered is bigger than the second one. As", str(num1), '>', str(num2) +'.')
else:
    print("The second number you entered is bigger than the first one. As", str(num2), '>', str(num1) +'.')
