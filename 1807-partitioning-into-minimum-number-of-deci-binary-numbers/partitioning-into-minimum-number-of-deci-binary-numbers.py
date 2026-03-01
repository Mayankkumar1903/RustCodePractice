class Solution:
    def minPartitions(self, n: str) -> int:
        maxi = 0
        for s in n:
            maxi = max(maxi,int(s))
        return maxi
