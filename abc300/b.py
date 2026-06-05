H, W = map(int, input().split())

A = [''] * H
for i in range(H):
    A[i] = input()

B = [''] * H
for i in range(H):
    B[i] = input()

ans = 'No'
for s in range(0, H):
    for t in range(0, W):
        c = 0
        for i in range(H):
            a = A[(s+i) % H][t:] + A[(s+i) % H][:t]
            if a == B[i]:
                c += 1
        if c == H:
            ans = 'Yes'

print(ans)
