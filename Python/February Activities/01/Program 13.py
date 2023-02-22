# Name: Gabriel F. Aguilar
# Program Description: Write a program that takes the radius of a sphere (a floating-point number) 
# as input and then outputs the sphere’s diameter, circumference, surface area, and volume.
# Write a program that takes the radius of a sphere (a floating-point number) as input and then outputs the sphere’s diameter, 
# circumference, surface area, and volume.

#Code:

#constant
PI = 3.14159265
#Raw Values 
radius = float(input("The radius of the sphere in meters: "))
diameter = 2 * radius
circumference = 2 * (PI * radius)
surface_area = 4 * (PI * (radius ** 2))
volume = (4 / 3) * (PI * (radius ** 3))

print("The sphere's diameter is", str(diameter) ,"meters. It has a circumference of", str(circumference),
      "and a surface area of", str(surface_area) + "meters squared. It's volume is", volume, "cubic meters."  )