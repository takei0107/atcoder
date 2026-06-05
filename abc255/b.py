import math

N, K = map(int, input().split())
A = list(map(int, input().split()))

B = list()
for i in range(N):
    B.append(tuple(map(int, input().split())))

ans = 0
for i in range(N):
    tmp = 10000000
    bx = B[i][0]
    by = B[i][1]
    for j in range(K):
        ax = B[A[j]-1][0]
        ay = B[A[j]-1][1]
        tmp = min(tmp, math.sqrt((ax-bx)**2 + (ay-by)**2))
    ans = max(ans, tmp)

print(ans)
