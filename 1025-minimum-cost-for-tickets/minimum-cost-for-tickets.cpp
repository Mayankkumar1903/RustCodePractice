class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int>dp(367,-1);
        int res = solve(0,n,days,costs,dp);
        return res;
    }
    int solve(int ind,int n,vector<int>& days,vector<int>& costs,vector<int>& dp){
        if(ind >= n)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int choice1= costs[0]+solve(ind+1,n,days,costs,dp);
        int i;
        for(i=ind;i<n and days[ind]+7>days[i];i++);
        int choice2= costs[1]+solve(i,n,days,costs,dp);
        for(i=ind;i<n and days[ind]+30>days[i];i++);
        int choice3=costs[2]+solve(i,n,days,costs,dp);
        return dp[ind]=min({choice1,choice2,choice3});
    }
};