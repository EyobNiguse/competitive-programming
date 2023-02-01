class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        num_of_arr2 = {}
        not_in_arr2 = []
        answer = [ 0 for _ in range(len(arr1))]
        sortedIndex = 0
        for x in arr2:
            num_of_arr2[x]=0    
        for x in arr1:
            if x in num_of_arr2:
                num_of_arr2[x]+=1
            else:
                not_in_arr2.append(x)
        count = 0
        for x in range(len(arr2)):
            amount = num_of_arr2[arr2[x]]
            sortedIndex = count
            for i in range(count, count+amount):
                print(arr2[x],i,amount)
                answer[i] = arr2[x]
            count+=amount
        not_in_arr2.sort()
        sortedIndex+=1
        for x in not_in_arr2:
            answer[sortedIndex] = x
            sortedIndex+=1
        return answer
