from random import shuffle
def main_func():
    n = int(input())
    a = []
    b = []
    x = 1
    if (n//2)%2 == 0:
        for _ in range(1,n+1,2):
            if x:
                a.append(_)
                b.append(_+1)
            if not x:
                b.append(_)
                a.append(_+1)
            x= abs(x-1)
        print("YES") 
        shuffle(a)
        for _ in a:
            print(_, end =" ")
        print("")
        for _ in b:
            print(_, end =" ")
        
        
    else:
        print("NO")
    
        

 
t = int(input())

for _ in range(t):
    main_func()