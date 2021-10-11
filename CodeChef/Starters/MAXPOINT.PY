def main_func():
    A,B,C = [int(c) for c in input().split()]
    x,y,z = [int(c) for c in input().split()]

    max_point= 0
    for a in range(21):
        for b in range(21):
            for c in range(21):
                points = a*x + b*y + c*z
                if (a*A + b*B + c*C) <= 240 and max_point < points:
                    max_point = points
    
    print(max_point)

t = int(input())

for _ in range(t):
    main_func()