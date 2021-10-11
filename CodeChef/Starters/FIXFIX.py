def main_func():
    n,k = [int(c) for c in input().split()]
    if n ==k:
        for _ in range(1,n+1):
            print(_, end=" ")
    elif (n-k) == 1:
        print(-1)
    else:
        lst = list(range(1,n))
        lst.insert(k,n)
        for _ in lst:
            print(_,end=" ")


t = int(input())

for _ in range(t):
    main_func()