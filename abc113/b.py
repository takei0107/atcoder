N = int(input())
T,A = map(int, input().split())
H = [h for h in map(int, input().split())]

m = 100000
ans = 1
for i, h in enumerate(H, 1):
    a = abs(A-(T-h*0.006))
    m = min(m, a)
    if m == a:
        ans = i

print(ans)
