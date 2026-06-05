N = int(input())
A = list(map(int, input().split()))

a = [0] * N
x = 0
for i in range(0, N):
    x += A[i]
    if x > 360:
        x -= 360
    a[i] = x

a = sorted(a)

ans = -1
p = 0
for b in a:
    ans = max(ans, b - p)
    p = b
ans = max(ans, 360-p)

print(ans)
