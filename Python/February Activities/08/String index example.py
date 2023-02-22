name_1 =" "+ input("Please enter a name: ")
length = len(name_1)
index_num = int(input("Please enter a character number 0-" + str(length) + ': '))

if index_num > length:
    print("Error! Invalid Input")
else:
    print(name_1[index_num])
