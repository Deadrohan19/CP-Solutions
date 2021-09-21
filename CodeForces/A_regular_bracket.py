#Educational Codeforces Round 114
def main_func():
    x = int(input())
    for _ in range(x):
        print("("*(x-_)+")"*(x-_)+"()"*_)
    
t = int(input())
    
for _ in range(t):
    main_func()