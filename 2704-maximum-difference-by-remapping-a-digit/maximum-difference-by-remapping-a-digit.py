class Solution:
    def minMaxDifference(self, num: int) -> int:
        l = list(str(num))
        k = ''
        ko = ''
        a = list(str(num))
        b = list(str(num))
        n = len(l)

        for i in range(n):
            if l[i]!='9':
                k = l[i]
                break
        
        for i in range(n):
            if l[i]!=0:
                ko = l[i]
                break

        if k=='': return int(num)


        for i in range(n):
            if l[i]==k:
                a[i]='9'
            if l[i]==ko:
                b[i]='0'
            
        return int(''.join(a))-int(''.join(b))