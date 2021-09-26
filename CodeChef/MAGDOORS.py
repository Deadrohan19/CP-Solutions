def main_func():
    string = input()
    count = 0
    gate = '0'
    for _ in string:
        if _ == gate:
            count += 1
            if gate == '0':
                gate = '1'
            else:
                gate = '0'
    print(count)



t = int(input())

for _ in range(t):
    main_func()