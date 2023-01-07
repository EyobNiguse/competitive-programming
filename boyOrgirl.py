name = input()
ans = set()
for x in name:
    ans.add(x)
if(len(ans) % 2 == 0):
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
