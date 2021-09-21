from random import shuffle
def main_func():
    n = int(input())
    lst = list(map(int, input().split()))
    diff = 0
    counter = 0
    on = True
    for _ in range(n-1):
        if ((abs(lst[_]-lst[_+1]))%2==0):
            counter += 1
    if counter == (n-1):
        print("-1")
        on = False
            
    while on:
        for _ in range(n-1):
            diff += abs(lst[_]-lst[_+1])
        if diff%2 != 0:
            for _ in lst:
                print(_, end=' ')
            break
        shuffle(lst)

t = int(input())

for _ in range(t):
    main_func()