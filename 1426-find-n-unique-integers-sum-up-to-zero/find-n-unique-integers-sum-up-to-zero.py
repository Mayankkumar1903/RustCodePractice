class Solution:
    def sumZero(self, n: int) -> List[int]:

        res = []
        i = 0
        while i<n//2:
            res.append(i+1)
            res.append(-(i+1))
            i+=1
        if n%2!=0:
            res.append(0)

        return res
        