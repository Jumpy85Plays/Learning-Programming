# Name: Gabriel F. Aguilar
# Program Description: An employee’s total weekly pay equals the hourly wage multiplied by the total number of regular hours plus any overtime pay. 
# Overtime pay equals the total overtime hours multiplied by 1.5 times the hourly wage. 
# Write a program that takes as inputs the hourly wage, total regular hours, and total overtime hours and displays an employee’s total weekly pay.

#Code:

hourly_wage = int(input("How much is the employee's hourly wage?: "))
total_regular_hours = int(input("How much is the employee's regular hours?(In the week): "))
overtimePay = int(hourly_wage * 1.5)
overtime_hours = int(input("How many hours in overtime has the employee done?(In the week): "))
totalRegularPay = int(hourly_wage * total_regular_hours)
totalOvertimePay = int(overtimePay * overtime_hours)
weeklyPay = int(totalRegularPay) + int(totalOvertimePay)
print("The employee's weekly pay is ₱", str(weeklyPay) +'.00 .')