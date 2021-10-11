def main_func():
    n = int(input())
    x = 10**(n-1)
    while True:
        if x%3==0 and x%9 != 0 and x%2 != 0:
            print(x)
            break
        x += 1


t = int(input())

for _ in range(t):
    main_func()