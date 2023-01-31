#define the function
def format_name(name_input,age_input):
    print("The name you entered is", name_input + '. You are', age_input, 'years old.')
    
name1 = input("What is your name?: ")
age1 = input("How old are you?: ")

#calling the function
format_name(name1,age1)