def main_func():
    P,a,b,c,x,y = [int(c) for c in input().split()]
    max = P//min((x*a + b),(y*a+c))
    print(max)


t = int(input())

for _ in range(t):
    main_func()