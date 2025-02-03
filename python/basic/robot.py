import math

class Robot:
    h = 0
    w = 0

def input_command():
    l = []
    while True:
        s = input()
        if not s:
            break
        l.append(tuple(s.split(" ")))
    return l

def handleCommand():
    # init the value
    r = Robot()
    commands = input_command()
    # move the pos
    for command in commands:
        if command[0] == "UP":
            r.h += int(command[1])
        if command[0] == "DOWN":
            r.h -= int(command[1])
        if command[0] == "RIGHT":
            r.w += int(command[1])
        if  command[0] == "LEFT":
            r.w -= int(command[1])
    # final pos
    return int(round((math.sqrt((abs(r.h) ** 2) + (abs(r.w) ** 2)))))

print(handleCommand())
