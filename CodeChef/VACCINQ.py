def main_func():
    n,p,x,y = [int(c) for c in input().split()]
    lst = list(map(int, input().split()))
    new_lst= lst[:p]
    print((new_lst.count(0)*x)+(new_lst.count(1)*y))



t = int(input())

for _ in range(t):
    main_func()