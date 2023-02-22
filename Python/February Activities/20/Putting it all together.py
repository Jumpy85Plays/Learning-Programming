number_list = []
max_number = 1000
number_sum = 0
number_product = 1


listnum = int(input("How many digits?: "))
for i in range(listnum) : number_list.append(int(input(f"Number {i+1}: "))) 
    
choice = input("add(+) or multiply(*) the numbers in list?: ")
    
if choice == "add" or choice == '+':
    for number in number_list: number_sum+= number
    print("The sum of the numbers is: ", number_sum)
elif choice == "multiply" or choice == '*':
    for number in number_list: number_product *= number
    print("The product of the numbers is: ", number_product)        
