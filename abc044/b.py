lst = [0] * 26

w = input()

for c in w:
    lst[ord(c) - ord('a')] += 1

for i in lst:
    if not i % 2 == 0:
        print('No')
        break
else:
    print('Yes')
