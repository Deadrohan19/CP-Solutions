def main_func():
    x,y,z = [int(c) for c in input().split()]
    if (y-x)<=z*2:
        print("YES")
    else:
        print("NO")



t = int(input())

for _ in range(t):
    main_func()