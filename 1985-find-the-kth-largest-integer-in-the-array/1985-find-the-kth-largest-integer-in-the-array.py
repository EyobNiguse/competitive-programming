class Solution(object):
    def kthLargestNumber(self, nums, k):
        """
        :type nums: List[str]
        :type k: int
        :rtype: str
        """
        cpList = [];
        nums.sort()
        for x in nums:
            cpList.append(int(x))
        cpList.sort()
        return(str(cpList[len(cpList)-k]))