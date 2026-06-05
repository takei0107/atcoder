N, M = map(int, input().split())

A = [[False]*(N+1) for _ in range(N+1)]

ans = 0
for i in range(M):
    U, V = map(int, input().split())
    A[U][V] = True
    A[V][U] = True
    for j in range(N):
        if A[U][j+1] and A[V][j+1]:
            ans += 1

print(ans)
