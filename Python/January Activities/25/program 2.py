# Name: Gabriel F. Aguilar
# Program Description: Write a program to add and then subtract two numbers. Use variables to hold the numbers. Use a print statement to show the output

#Code:

first_Number = input("Enter first number here: ")
second_Number = input("Enter second number here: ")
sum_of_number = int(first_Number) + int(second_Number)
difference_of_number = int(sum_of_number) - int(first_Number)
print(first_Number ,'+', second_Number,'-', first_Number , '=' , difference_of_number)