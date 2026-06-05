N,X = [int(_) for _ in input().split()]

ans = 0
x = 0
for i in range(0, N):
    V,P = [int(_) for _ in input().split()]
    x += (V * P)
    ans += 1
    if x > X*100:
        break
else:
    ans = -1

print(ans)
