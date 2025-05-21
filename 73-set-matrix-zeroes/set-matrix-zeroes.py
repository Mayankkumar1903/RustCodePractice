class Solution(object):
    def setZeroes(self, matrix):
        m,n = len(matrix),len(matrix[0])
        row = [False]*m
        col = [False]*n

        for i in range(m):
            for j in range(n):
                if matrix[i][j]==0:
                    row[i]=True
                    col[j]=True
        
        for i in range(m):
            if row[i]:
                for j  in range(n):
                    matrix[i][j]=0

        for j in range(n):
            if col[j]:
                for i in range(m):
                    matrix[i][j]=0
        