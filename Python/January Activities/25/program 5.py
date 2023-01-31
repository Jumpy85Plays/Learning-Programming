# Name: Gabriel F. Aguilar
# Program Description: Write a program that asks for 2 inputs from the user and determines wether the start is uppercase or not

#Code:

word1 = input("Enter a word: ")
word2 = input("Enter another word: ")

print("The first word", word1, "is uppercase", word1.isupper(), "and the second word", word2 , "is  uppercase", word2.isupper(),"." )
print("The first word", word1, "is lowercase", word1.islower(), "and the second word", word2 , "is  lowercase", word2.islower(),"." )