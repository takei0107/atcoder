N,W = list(map(int, input().split()))
A = list(map(int, input().split()))

x = [False]*(5*10**6)

for i in range(N):
    if A[i] <= W:
        x[A[i]] = True
        for j in range(i+1, N):
            if A[i] + A[j] <= W:
                x[A[i]+A[j]] = True
                for k in range(j+1, N):
                    if A[i] + A[j] + A[k] <= W:
                        x[A[i]+A[j]+A[k]] = True

ans = sum(filter(lambda a: a, x))
print(ans)
