#7. Create a program using a while loop and if statement to tell the user whether the output is a title or they need to re-enter the information:
#	"Much Ado About Nothing" is a title
#	Try again: "Much ado about Nothing" is not a title

titleName = ""

while True:
    titleName = input("Enter a name that you think is a title.: ")
    if titleName.istitle():
        print("The input entered is a title.")
        break
    else:
        print("The input entered is not a title, please enter a title.")