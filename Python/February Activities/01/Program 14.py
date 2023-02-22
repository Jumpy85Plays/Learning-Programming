# Name: Gabriel F. Aguilar
# Program Description: Five Star Retro Video rents VHS tapes and DVDs to the same connoisseurs who like to buy LP record albums. 
# The store rents new videos for $3.00 a night, and oldies for $2.00 a night. Write a program that the clerks at Five Star Retro Video 
# can use to calculate the total charge for a customer’s video rentals.
# The program should prompt the user for the number of each type of video and output the total cost.

#Code:

newVideosCost = int(3)
oldVideosCost = int(2)
oldVideosRented = int(input('How many old videos did the customer rent?: '))
newVideosRented = int(input('How many new videos did the customer rent?: '))
totalPayment = (oldVideosCost * oldVideosRented) + (newVideosCost * newVideosRented)

print("The customer's bill in total is ₱" , str(totalPayment) +'.00 .')