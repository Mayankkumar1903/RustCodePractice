class Solution:
    def maxFreqSum(self, s: str) -> int:
        vowels = 'aeiou'
        maxVowel = 0 
        maxcons = 0
        for i in range(len(s)):
            cnt = 0
            for j in range(len(s)):
                if s[i]==s[j]:
                    cnt+=1
            
            if s[i] in vowels:
                maxVowel = max(maxVowel,cnt)
            else : maxcons = max(maxcons,cnt)

        return maxVowel + maxcons