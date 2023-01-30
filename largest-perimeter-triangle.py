class Solution(object):
    def largestPerimeter(self, nums):
        nums.sort()
        # 1 2 2 
        temp_dict = {}
        maxSum = 0
        for x in range(len(nums)-1,0,-1):
            print(x)
            if nums[x]  + nums[x-1] > nums[x-2] and nums[x-1] + nums[x-2] > nums[x] and nums[x] + nums[x-2] > nums[x-1]:
                maxSum = max(maxSum,nums[x] + nums[x-1] + nums[x-2])
        return maxSum
