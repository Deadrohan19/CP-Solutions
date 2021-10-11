def main_func():
    lst = list(map(int, input().split()))
    if lst.count(1)>lst.count(0):
        print("YES")
    else:
        print("NO")

t = int(input())

for _ in range(t):
    main_func()