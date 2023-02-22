# Name: Gabriel F. Aguilar
# Program Description: Write a program that calculates and prints the number of minutes in a year.  

#Code:

minutes_in_hour = 60
hours_in_day = 24
days_in_year = 365
minutes_in_day = minutes_in_hour * hours_in_day
minutes_in_a_year = minutes_in_day * days_in_year
print('There are', str(minutes_in_hour) ,'minutes in an hour. So we multiply that by the hours in a day and we get', str(minutes_in_day), 
      'minutes in a single day. We multiply that with the number of days in a single year and we get', str(minutes_in_a_year) +'.')

