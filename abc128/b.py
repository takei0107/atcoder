N = int(input())

sp = map(lambda x: (x[0], x[1], int(x[2])), [[i+1] + input().split() for i in range(0, N)])

sp = sorted(sp, key=lambda x: x[2], reverse=True)
sp = sorted(sp, key=lambda x: x[1])

for x in sp:
    print(x[0])
