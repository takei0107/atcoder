D, N = map(int, input().split())

if N == 100:
    N += 1

print(N, end='')
for i in range(0, D):
    print('00', end='')
