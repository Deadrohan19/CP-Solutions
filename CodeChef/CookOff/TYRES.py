#COOK133C
def main_func():
    a = int(input())
    if a%4 == 0:
        print("NO")
    else:
        print("YES")

t = int(input())

for _ in range(t):
    main_func()