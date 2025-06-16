class Solution:
    def maximumDifference(self, nums: List[int]) -> int:
        maxDiff = -1
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if nums[j]>nums[i]:
                    maxDiff = max(maxDiff,(nums[j]-nums[i]))

        return maxDiff