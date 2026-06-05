N, S, M, L = map(int, input().split())

ans = 1000000000
for x in range(0, 18):
    for y in range(0, 14):
        for z in range(0, 10):
            if 6*x+8*y+12*z >= N:
                ans = min(ans, S*x+M*y+L*z)

print(ans)
