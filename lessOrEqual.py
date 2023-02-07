n  = input().split()
arr = []
for x in n:
    arr.append(int(x))
k = arr[1]
listOfNums = input().split()
intList = []
for x in listOfNums:
    intList.append(int(x))
intList.sort()
ans  = 0 
if(k==0):
    ans =  intList[k] - 1
else:
    ans =  intList[k-1]
count = 0 
for x  in intList:
  
    if(x <= ans):
        count+=1
 
if ans == 0 or not count == k:
    print(-1)
else:
    print(ans)         
