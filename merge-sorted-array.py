class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        for i in range(len(nums2)):
            j  =  m -1 + i
            temp =  nums1[j] 
            while(nums2[i] < nums1[j] and j >= 0):
                nums1[j+1] = nums1[j]
                j-=1
            nums1[j+1] = nums2[i]
           
