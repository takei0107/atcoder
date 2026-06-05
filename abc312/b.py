N, M = map(int, input().split())

S = [input() for _ in range(N)]

for i in range(N):
    for j in range(M):
        c = 0
        if S[i][j:].startswith('###.'):
            c += 1
            for k in range(1, 3):
                if i+k >= N:
                    break
                if S[i+k][j:].startswith('###.'):
                    c += 1
            k = i + 3
            if k < N and S[k][j:].startswith('....'):
                c += 1
        k = i + 5
        l = j + 5
        if k < N and l < M:
            if S[k][l:].startswith('....'):
                c += 1
                for m in range(1, 4):
                    if k+m >= N:
                        break
                    if S[k+m][l:].startswith('.###'):
                        c += 1
        if c == 8:
            print(f'{i+1} {j+1}')
