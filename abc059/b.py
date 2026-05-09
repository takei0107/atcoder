A = input()
B = input()

ans = 'EQUAL'
if len(A) > len(B):
    ans = 'GREATER'
elif len(A) < len(B):
    ans = 'LESS'
else:
    for i in range(0, len(A)):
        if int(A[i]) > int(B[i]):
            ans = 'GREATER'
            break
        elif int(A[i]) < int(B[i]):
            ans = 'LESS'
            break

print(ans)
            
