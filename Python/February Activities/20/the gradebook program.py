grade_list = []
max_grade = 100
average_grade = 0
grade_counter = 0
grade_sum = 0

while True:
    grade = float(input("Enter a grade, type -1 to quit: "))
    if grade == -1:
        break
    else:
        if grade <= max_grade:
            grade_sum += grade
            grade_list.append(grade)
            grade_counter +=1
        else:
            print("Invalid grade, Please try again.")
            
average_grade = grade_sum/grade_counter

print(grade_sum)
print(average_grade)
print(grade_list)