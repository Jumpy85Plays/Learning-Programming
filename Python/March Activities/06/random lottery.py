#Create a program that will generate a lotto 6/45 combination. Your program should display the same number that is already generated.
import random

lis = random.sample(range(45), 6)
print(lis)    