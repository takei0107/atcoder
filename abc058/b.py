O = input()
E = input()

s = len(O) + len(E)

for i in range(0, s):
    if (i+1) % 2 == 0:
        print(E[i//2], end='')
    else:
        print(O[i//2], end='')
print()


