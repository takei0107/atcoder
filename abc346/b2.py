S = 'wbwbwwbwbwbw'
W, B = map(int, input().split())

ans = 'No'
for i in range(len(S)):
    nw = 0
    nb = 0
    for j in range(W+B):
        c = S[(i+j) % len(S)]
        if c == 'w':
            nw += 1
        else:
            nb += 1
        if nw == W and nb == B:
            ans = 'Yes'

print(ans)
