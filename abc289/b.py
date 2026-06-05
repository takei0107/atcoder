N, M = map(int, input().split())
a = list(map(int, input().split()))

g = [[False]*(N+2) for _ in range(N+2)]
for i in a:
    g[i][i+1] = True

st = set()
for i in range(1, N+1):
    st.add(i)
    if not g[i][i+1]:
        st = reversed(sorted(st))
        for j in st:
            print(j, end=' ')
        st = set()
