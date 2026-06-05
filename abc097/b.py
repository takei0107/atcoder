from sys import exit

X = int(input())

for x in list(reversed(range(1, X+1))):
    for b in range(1, 1000):
        for p in range(2, 10):
            if b ** p == x:
                print(x)
                exit(0)
