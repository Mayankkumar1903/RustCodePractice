class Solution(object):
    def findWordsContaining(self, words, x):
        res = []
        for i in range(0,len(words)):
            if x in words[i]:
                res.append(i)
        return  res
        
        