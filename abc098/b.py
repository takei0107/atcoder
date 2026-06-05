N = int(input())
S = input()

ans = 0
for i in range(1, len(S)):
    x = set(S[:i])
    y = set(S[i:])

    count = 0
    for c in x:
        if c in y:
            count += 1
    ans = max(ans, count)

print(ans)
