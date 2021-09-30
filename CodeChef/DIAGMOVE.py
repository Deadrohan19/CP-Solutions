def main_func():
    x,y = [int(c) for c in input().split()]
    if abs(x-y)%2 == 0:
        print("YES")
    else:
        print("NO")


t = int(input())

for _ in range(t):
    main_func()