from collections import deque

t = int(input())

for i in range(0,t):
    n=list(map(int, input().split()))
    n.pop(0)
    n = deque(n)
    n.rotate(-1)
    print(*n)
