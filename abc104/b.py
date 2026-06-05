S = input()

if not S[0] == 'A':
    print('WA')
else:
    s = S[2:-1]
    nc = 0
    nu = 0
    for c in s:
        if c >= 'A' and c <= 'Z':
            if c == 'C':
                nc += 1
            else:
                nu += 1
    if S[1] >= 'A' and S[1] <= 'Z':
        nu += 1
    if S[len(S)-1] >= 'A' and S[len(S)-1] <= 'Z':
        nu += 1
    if nc == 1 and nu == 0:
        print('AC')
    else:
        print('WA')
