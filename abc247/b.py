N = int(input())

s = list()
t = list()
for i in range(0, N):
    a, b = input().split()
    s.append(a)
    t.append(b)

ans = 'Yes'
for i in range(N):
    a1 = s[i]
    a2 = t[i]
    b1 = False
    b2 = False
    for j in range(N):
        if i != j:
            if a1 == s[j] or a1 == t[j]:
                b1 = True
            if a2 == s[j] or a2 == t[j]:
                b2 = True
    if b1 and b2:
        ans = 'No'
        break

print(ans)
