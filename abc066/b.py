S = input()

S = S[:len(S)-1]
while len(S) > 1:
    if len(S) % 2 == 0:
        s1 = S[:len(S)//2]
        s2 = S[len(S)//2:]
        if s1 == s2:
            print(len(S))
            break
    S = S[:len(S)-1]
