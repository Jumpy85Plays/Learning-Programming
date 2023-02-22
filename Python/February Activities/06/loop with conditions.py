import time
x = 10

while x > 0:
    print("The missile will launch in",x, "seconds.")
    x -= 1
    time.sleep(1)
    if x == 0:
        print("The missile has been launched.")