import sys

def divider(n):
    if n == 0:
        exit()
    elif n%3 == 0 and n%5 == 0:
        print("TAK\n")
    
    else:
        print("NIE\n")

n = 1
while n:
    n = int(input())
    divider(n)
