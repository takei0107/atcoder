N = int(input())

s = set()
for _ in range(0, N):
    L, *a = map(int, input().split())
    s.add(tuple(a))

print(len(s))
