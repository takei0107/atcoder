x1,y1,x2,y2 = map(int, input().split())

dx = abs(x1-x2)
dy = abs(y1-y2)

if x1 < x2:
    if y1 < y2:
        x3 = x2 - dy
        y3 = y2 + dx
        x4 = x3 - dx
        y4 = y3 - dy
    elif y1 > y2:
        x3 = x2 + dy
        y3 = y2 + dx
        x4 = x3 - dx
        y4 = y3 + dy
    else:
        x3 = x2
        y3 = y2 + dx
        x4 = x1
        y4 = y3
elif x1 > x2:
    if y1 < y2:
        x3 = x2 - dy
        y3 = y2 - dx
        x4 = x3 + dx
        y4 = y3 - dy
    elif y1 > y2:
        x3 = x2 + dy
        y3 = y2 - dx
        x4 = x3 + dx
        y4 = y3 + dy
    else:
        x3 = x2
        y3 = y2 - dx
        x4 = x1
        y4 = y3
else:
    if y1 < y2:
        x3 = x2 - dy
        y3 = y2
        x4 = x3
        y4 = y1
    else:
        x3 = x2 + dy
        y3 = y2
        x4 = x3
        y4 = y1

print(x3, y3, x4, y4)
