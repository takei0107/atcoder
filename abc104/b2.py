S = input()

if not S[0] == 'A':
    print('WA')
else:
    s = S[2:-1]
    if not s.count('C') == 1:
        print('WA')
    else:
        for c in s:
            if c.isupper() and not c == 'C':
                print('WA')
                break
        else:
            if S[1].isupper() or S[len(S)-1].isupper():
                print('WA')
            else:
                print('AC')
