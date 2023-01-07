sz = int(input())
ans = 0
for i in range(sz):
    temp = input()
    if '+' in temp:
        ans = ans + 1
    else:
        ans = ans - 1
print(ans)
