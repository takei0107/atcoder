D, N = map(int, input().split())

c = 0
if D == 0:
    for i in range(0, N):
        c += 1
        if c % 100 == 0:
            c += 1
elif D == 1:
    for i in range(0, N):
        c += 100
        if (c//100 % 100) == 0:
            c += 100
else:
    for i in range(0, N):
        c += 10000
        if (c//10000 % 100) == 0:
            c += 10000

print(c)
