class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        res = []
        extra = k-(len(s)%k)
        if len(s)%k != 0:
            s+=fill*extra
        
        for i in range(0,len(s),k):
            if i+k <= len(s):
                res.append(s[i:i+k])
           
        return res