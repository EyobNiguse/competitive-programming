n  = int(input())
temp_out  = []
countx = 0
county = 0
countz = 0
while(n > 0):
    temp_out.append(input().split())
    n-=1
for x in temp_out:
    countx += int(x[0])
    county += int(x[1])
    countz += int(x[2])

if(countx == 0 and county==0 and countz==0):
    print("YES")
else:
    print("NO")
