name1 = open('trial.txt','r')
names_line = name1.readline()
while names_line:
    print(names_line.capitalize())
    names_line = name1.readline()
