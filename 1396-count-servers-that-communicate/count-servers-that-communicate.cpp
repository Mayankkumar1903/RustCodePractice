class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int>rowServerCount(n,0),colServerCount(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    rowServerCount[i]++;
                    colServerCount[j]++;
                }
            }
        }
        int cntServers = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    if(rowServerCount[i]>1 or colServerCount[j]>1) cntServers++;
                }
            }
        }
        return cntServers;
    }
};