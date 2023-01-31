# Name: Gabriel F. Aguilar
# Program Description: Create 5 variables and use input function to accept (Name(string)), Math Grade (float), Science Grade (float), 
# English Grade (integer), Average Float.

# Code:

student_Name = input("Enter your student name: ")
math_Grade = input("Enter  grade here: ")
science_Grade = input("Enter  grade here: ")
english_Grade = input("Enter  grade here: ")
average_Grade = (int(math_Grade) + int(science_Grade) + int(english_Grade))/int(3)

print(
    "Name: ",student_Name,
    "\nMath Grade: ",math_Grade,
    "\nScience Grade: ",science_Grade,
    "\nEnglish Grade: ",english_Grade,
    "\nAverage Grade: ",average_Grade
)