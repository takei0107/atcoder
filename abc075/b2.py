H,W = map(int, input().split())

S = [input() for _ in range(0, H)]

for y in range(0, H):
    for x in range(0, W):
        if S[y][x] == '#':
            print('#', end='')
        else:
            c = 0
            for dx in range(-1, 2):
                for dy in range(-1, 2):
                    if dx == 0 and dy == 0:
                        continue
                    xx = x + dx
                    yy = y + dy
                    if 0 <= xx and xx < W and 0 <= yy and yy < H:
                        if S[yy][xx] == '#':
                            c += 1
            print(c, end='')
    print()
