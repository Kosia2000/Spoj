t = int(input())

for i in range(0,t):
    v1, v2 = map(int, input().split())
    average_speed = int((2*v1*v2)/(v1+v2))

    print(average_speed)
