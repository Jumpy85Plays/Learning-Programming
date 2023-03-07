#Create a program named "friends.dat" and input at least 10 friends in that file. Then output back the names in that file.
new_file = open('friends.dat','w')
new_file.write("My friends are John Luc Cubos, Rochelle Capada, Guiapar Silverio,\nDean Dadivas, Marc Jee Alvarez, Wystan Socapen, Emmanuel Wence Fernandez,\nKaye Munos, Argelene Calitas, and Julrich Villarosa.")
new_file.close()
new_file = open('friends.dat','r')
names_line = new_file.read()
print(names_line.title())

