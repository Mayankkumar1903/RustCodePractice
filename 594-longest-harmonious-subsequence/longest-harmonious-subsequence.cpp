class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int it:nums) mp[it]++;
        int lhs = 0;
        for(auto it:mp){
            if(mp.find(it.first-1)!=mp.end()){
                lhs = max(lhs,(it.second+mp[it.first-1]));
            }
            else if(mp.find(it.first+1)!=mp.end()){
                lhs = max(lhs,(it.second+mp[it.first+1]));
            }
        }
        return lhs;
    }
};