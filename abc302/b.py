H, W = map(int, input().split())

S = [input() for _ in range(H)]

dx = [-1, -1, -1, 0, 0, 1, 1, 1]
dy = [-1, 0, 1, -1, 1, -1, 0, 1]

for h in range(H):
    for w in range(W):
        for i in range(0, 8):
            st = ''
            for j in range(0, 5):
                x = h + j*dx[i]
                y = w + j*dy[i]
                if x < 0 or x >= W or y < 0 or y >= H:
                    break
                st += S[x][y]
            if st == 'snuke':
                for j in range(0, 5):
                    x = h + j*dx[i] + 1
                    y = w + j*dy[i] + 1
                    print(f'{x} {y}')
