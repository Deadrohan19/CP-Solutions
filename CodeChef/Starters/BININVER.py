def main_func():
    n = int(input())
    lst = list(map(int, input().split()))
    lst1 = []
    for num in lst:
        if num%2!=0:
            print(0)
            return
        count = 1
        while True:
            num /= 2
            if num%2 != 0:
                lst1.append(count)
                break
            count +=1

    print(min(lst1))
        
    


t = int(input())

for _ in range(t):
    main_func()