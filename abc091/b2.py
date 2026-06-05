N = int(input())
s = [input() for _ in range(0, N)]
M = int(input())
t = [input() for _ in range(0, M)]

ans = 0
for si in range(0, N):
    point = 0
    for i in range(0, N):
        if s[i] == s[si]:
            point += 1
    for i in range(0, M):
        if t[i] == s[si]:
            point -= 1
    ans = max(ans, point)

print(ans)
