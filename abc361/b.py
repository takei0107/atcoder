a, b, c, d, e, f = map(int, input().split())
g, h, i, j, k, l = map(int, input().split())

if j <= a or d <= g or k <= b or e <= h or l <= c or f <= i:
    print('No')
else:
    print('Yes')
