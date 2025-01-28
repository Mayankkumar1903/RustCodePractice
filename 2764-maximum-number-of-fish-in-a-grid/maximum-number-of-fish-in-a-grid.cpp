class Solution {
public:
    int fishCaught(int i,int j,vector<vector<int>>& grid,int n , int m){
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==0) return 0;
        int fish=grid[i][j];
        grid[i][j]=0;
        fish+=fishCaught(i,j-1,grid,n,m);
        fish+=fishCaught(i,j+1,grid,n,m);
        fish+=fishCaught(i-1,j,grid,n,m);
        fish+=fishCaught(i+1,j,grid,n,m);
        return fish;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int maxFish = 0;
        int n = grid.size() , m = grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] > 0){
                    maxFish = max(maxFish,fishCaught(i,j,grid,n,m));
                }
            }
        }

        return maxFish;
    }
};