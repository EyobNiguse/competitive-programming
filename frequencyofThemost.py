class Solution:
    def maxFrequency(self, nums: List[int], k: int) -> int:
        l = 0
        r = 0
        ans = 0
        add = 0
        nums.sort()
        while(l < len(nums)):
            add += nums[l]
            while(add + k < ((nums[l])*(l-r+1))):
                add -= nums[r]
                r+=1
            ans = max(ans,l-r+1)
            l +=1
        return ans
