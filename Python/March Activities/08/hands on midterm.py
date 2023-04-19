# Write a Python program to read a text file and create a new file containing the lines in reverse order.
#import time
readfile = open("aguilar_midterm1.txt", "r")

read_lines = readfile.readline()
array = [0] * 3
i = 0
while read_lines:
    array[i] = read_lines
    print(array[i])
    read_lines = readfile.readline()
    i+=1
    
writefile = open("aguilar_midterm2.txt", "w")

while i > 0:
    writefile.write(array[i-1])
    i-=1
#time.sleep(3)
readfile.close()
writefile.close()

