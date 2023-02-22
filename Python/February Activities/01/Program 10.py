# Name: Gabriel F. Aguilar
# Program Description: Rewrite the grade book program (Module 1 presentation, Section 1.6 slides) 
# to use a function to get the grades as integers.

#Code:

def input_Grades():
    #input grades here function
    print('Please enter five grades. One at a time: ')
    grade1 = input("Grade 1: ")
    grade2 = input("Grade 2: ")
    grade3 = input("Grade 3: ")
    grade4 = input("Grade 4: ")
    grade5 = input("Grade 5: ")
    sum_grade= int(grade1) + int(grade2) + int(grade3) + int(grade4) + int(grade5)
    return sum_grade


sum_grade = input_Grades()
print('The sum of the grades is', str(sum_grade) + '.')