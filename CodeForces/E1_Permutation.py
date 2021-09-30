def main_func():
    n = int(input())
    lst = list(map(int, input().split()))
    new_lst = [lst[0]]
    if len(lst) != 1:
        for _ in lst[1:]:
            if _<new_lst[0]:
                new_lst.insert(0,_)
            else:
                new_lst.append(_)
    for _ in new_lst:
        print(_,end=" ")


t = int(input())

for _ in range(t):
    main_func()