N, M = map(int, input().split())

P = [0] * N
C = [0] * N
F = [None] * N

for i in range(N):
    P[i], C[i], *F[i] = map(int, input().split())

ans = 'No'
for i in range(N):
    for j in range(N):
        if i == j:
            continue
        if P[i] >= P[j]:
            if set(F[i]) <= set(F[j]):
                if P[i] > P[j] or len(set(F[j]) - set(F[i])) >= 1:
                    ans = 'Yes'

print(ans)
