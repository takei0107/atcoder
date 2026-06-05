N, X = map(int, input().split())

A = [int(a) for a in input().split()]

ans = -1
for x in range(0, 101):
    if ans != -1:
        break
    a = sorted(A + [x])
    sm = 0
    for i in range(N):
        if i == 0 or i == N-1:
            continue
        sm += a[i]
        if sm >= X:
            ans = x
            break

print(ans)
