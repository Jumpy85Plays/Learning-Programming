# Name: Gabriel F. Aguilar
# Program Description: Rewrite the grade book program again—this time use a function to calculate the average. 
# Pass the needed values (sum, num_grades) using parameters.

#Code:
def average_grades(sum, num_grades):
    average_grades = int(sum)/num_grades
    print("The average of the grades is", str(average_grades) + '.')

num_grades = 5
grade1 = input("Grade 1: ")
grade2 = input("Grade 2: ")
grade3 = input("Grade 3: ")
grade4 = input("Grade 4: ")
grade5 = input("Grade 5: ")
sum= int(grade1) + int(grade2) + int(grade3) + int(grade4) + int(grade5)
average_grades(sum, num_grades)
    

    

