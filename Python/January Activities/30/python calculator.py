def add(num1, num2):
    sum = num1 + num2
    return sum

def subtract(num1,num2):
    difference = num1 - num2
    return difference

def multiply(num1, num2):
    product = num1 * num2
    return product

def divide(num1, num2):
    if num1 != 0:
        quotient = num1 / num2
        return quotient
    else:
        print("Division by Zero Error")
        return 0

def modulo(num1, num2):
    if num1 == 0:
        return 0
    else:
        moduloo = num1 % num2
        return moduloo

def pawer(num1 , num2):
    if num2 == 0:
        return 1
    else:
        pahwer = num1 ** num2
        return pahwer
 
num1 = int(input("Please enter a number: "))
num2 = int(input("Please enter a second number: "))
operator = input("What is the operation? \( +(Addition) , -(Subtraction) , *(Multiplication) , /(Division) , %(Modulo) , ^(Power Of) ): ")

if operator == '+':
    answer = add(num1, num2)
elif operator == '-':
    answer = subtract(num1, num2)
elif operator == '*':
    answer = multiply(num1, num2)
elif operator == '/':
    answer = divide(num1, num2)
elif operator == '%':
    answer = modulo(num1, num2)
elif operator == '^':
    answer = pawer(num1, num2)
else:
    print("This is not a valid operation!")

print(str(answer))