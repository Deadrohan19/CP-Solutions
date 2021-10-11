def main_func():
    m,n,k = [int(c) for c in input().split()]
    if m > (n*k):
        print("YES")
    else:
        print("NO")


t = int(input())

for _ in range(t):
    main_func()