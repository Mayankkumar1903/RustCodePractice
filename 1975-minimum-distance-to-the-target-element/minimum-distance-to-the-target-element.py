class Solution:
    def getMinDistance(self, nums: List[int], target: int, start: int) -> int:
        mini = sys.maxsize
        for i in range(0,len(nums)):
            if nums[i]==target:
                mini = min(mini,abs(i-start))
            
        return mini