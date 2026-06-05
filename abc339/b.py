H, W, N = map(int, input().split())

G = [['.' for _ in range(W)] for _ in range(H)]

dx = [0, 1, 0, -1]
dy = [-1, 0, 1, 0]

d = 0
x = 0
y = 0
for _ in range(N):
    if G[y][x] == '.':
        G[y][x] = '#'
        d = (d+1) % 4
    else:
        G[y][x] = '.'
        if d == 0:
            d = 4
        d -= 1
    x = (x+dx[d]) % W
    y = (y+dy[d]) % H

for h in range(H):
    for w in range(W):
        print(G[h][w], end='')
    if h != H-1:
        print()
