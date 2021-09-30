def main_func():
    s = input()
    if s.count('B') == (s.count('A')+s.count('C')):
        print("YES")
    else:
        print("NO")




t = int(input())

for _ in range(t):
    main_func()