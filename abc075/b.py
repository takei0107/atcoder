H,W = map(int, input().split())

S = [input() for _ in range(0, H)]

for i in range(0, H):
    for j in range(0, W):
        if S[i][j] == '#':
            print('#', end='')
        else:
            b = 0
            b += 1 if i > 0 and j > 0 and S[i-1][j-1] == '#' else 0
            b += 1 if i > 0 and S[i-1][j] == '#' else 0
            b += 1 if i > 0 and j+1 < W and S[i-1][j+1] == '#' else 0
            b += 1 if j > 0 and S[i][j-1] == '#' else 0
            b += 1 if j+1 < W and S[i][j+1] == '#' else 0
            b += 1 if i+1 < H and j > 0 and S[i+1][j-1] == '#' else 0
            b += 1 if i+1 < H and S[i+1][j] == '#' else 0
            b += 1 if i+1 < H and j+1 < W and S[i+1][j+1] == '#' else 0
            print(b, end='')
    else:
        print()
