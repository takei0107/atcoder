N = int(input())

T = [_ for _ in map(int, input().split())]

M = int(input())

for i in range(0, M):
    P,X = map(int, input().split())
    T2 = T[:]
    T2[P-1] = X
    print(sum(T2))
