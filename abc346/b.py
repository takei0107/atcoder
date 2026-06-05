W, B = map(int, input().split())

S = 'wbwbwwbwbwbw' * 40

ans = 'No'
for i in range(0, len(S)):
    s = S[i:i+W+B]
    w = 0
    b = 0
    for c in s:
        if c == 'w':
            w += 1
        else:
            b += 1
    if w == W and b == B:
        ans = 'Yes'

print(ans)
