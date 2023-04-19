#Create a program that implements dictionary. Make a dictionary called students with keys lastname, firstname, middlename, course, and year.
#Populate the dictionary with at least 10 students. Include a menu where you can add students, update the content of the student, 
#delete a specific content of the student, clear the student dictionary and display the items in your dictionary.

students = {
    "Lastname" : "",
    "Firstname" : "",
    "Lastname" : "",
    "Course" : "",
    "Year" : "",
}

def menu():
    print("Choose what you want to do",
          "\n1. Add Student",
          "\n2. Update Student",
          "\n3. Delete Student",
          "\n4. Clear Student",
          "\n5. Show Student")
    dothis = int(input("What do you want to do?: "))
    
    if dothis == 1: addStudent(); pass
    if dothis == 2: updateStudent(); pass
    if dothis == 3: deleteStudent(); pass
    if dothis == 4: clearStudent(); pass
    if dothis == 5: showStudent(); pass
    pass

def addStudent():
    
    pass

def updateStudent():
    
    pass

def deleteStudent():
    
    pass

def clearStudent():
    
    pass

def showStudent():
    print(students)
    pass

menu()