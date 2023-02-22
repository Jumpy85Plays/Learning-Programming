product = input("Enter the type of pizza you want(Cheese or Veggie): ")

if product == "Veggie" or product == 'veggie':
    print("Here's your Veggie Pizza")
elif product == "Cheese" or product == 'cheese' or product == "Cheeze" or product == "cheeze":
    cheese = input("What type of cheese would you like?(Manchego or Cheddar): ")
    if cheese == "Manchego" or 'manchego':
        print("Here's your", cheese.title() , "Pizza")
    elif cheese == "Cheddar" or 'cheddar':
        print("Here's your", cheese.title() , "Pizza")
else:
    print("Input not in the choices")