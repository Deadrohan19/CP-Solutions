def main_func():
    l,r = [int(c) for c in input().split()]
    min = 0
    max = 0
    for _ in range(l,l+3):
        if _ %3 ==0:
            min = _
            break
    for _ in range (r,r-3,-1):
        if _%3 == 0:
            max = _
            break
    if min != 0:
        print(((max-min)//3)+1)
    else:
        print(0)

t = int(input())

for _ in range(t):
    main_func()