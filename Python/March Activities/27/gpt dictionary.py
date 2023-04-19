students = {}

def add_student():
    lastname = input("Enter last name: ")
    firstname = input("Enter first name: ")
    middlename = input("Enter middle name: ")
    course = input("Enter course: ")
    year = input("Enter year: ")
    students[lastname] = {"firstname": firstname, "middlename": middlename, "course": course, "year": year}
    print("Student added successfully.")

def update_student():
    lastname = input("Enter last name of student to update: ")
    if lastname in students:
        firstname = input("Enter new first name (press enter to skip): ")
        if firstname:
            students[lastname]["firstname"] = firstname
        middlename = input("Enter new middle name (press enter to skip): ")
        if middlename:
            students[lastname]["middlename"] = middlename
        course = input("Enter new course (press enter to skip): ")
        if course:
            students[lastname]["course"] = course
        year = input("Enter new year (press enter to skip): ")
        if year:
            students[lastname]["year"] = year
        print("Student updated successfully.")
    else:
        print("Student not found.")

def delete_student_content():
    lastname = input("Enter last name of student to delete content: ")
    if lastname in students:
        content = input("Enter content to delete (firstname/middlename/course/year): ")
        if content in students[lastname]:
            del students[lastname][content]
            print("Content deleted successfully.")
        else:
            print("Content not found.")
    else:
        print("Student not found.")

def clear_students():
    students.clear()
    print("All students cleared successfully.")

def display_students():
    if not students:
        print("No students found.")
    else:
        print("{:<15} {:<15} {:<15} {:<10} {:<5}".format("Last Name", "First Name", "Middle Name", "Course", "Year"))
        for lastname in students:
            student = students[lastname]
            print("{:<15} {:<15} {:<15} {:<10} {:<5}".format(lastname, student["firstname"], student["middlename"], student["course"], student["year"]))

while True:
    print("\nSelect an option:")
    print("1. Add a student")
    print("2. Update a student")
    print("3. Delete a student's content")
    print("4. Clear all students")
    print("5. Display all students")
    print("6. Exit program")
    choice = input("Enter choice (1-6): ")

    if choice == "1":
        add_student()
    elif choice == "2":
        update_student()
    elif choice == "3":
        delete_student_content()
    elif choice == "4":
        clear_students()
    elif choice == "5":
        display_students()
    elif choice == "6":
        break
    else:
        print("Invalid choice. Try again.")
