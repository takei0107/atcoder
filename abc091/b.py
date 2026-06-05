N = int(input())
s = [input() for _ in range(0, N)]
M = int(input())
t = [input() for _ in range(0, M)]

a = dict()
for ss in s:
    if a.get(ss):
        a[ss] += 1
    else:
        a[ss] = 1

b = dict()
for tt in t:
    if b.get(tt):
        b[tt] += 1
    else:
        b[tt] = 1

ans = 0

for it in a.items():
    c = it[1]
    if b.get(it[0]):
       c -= b[it[0]] 
    ans = max(ans, c)

print(ans)
