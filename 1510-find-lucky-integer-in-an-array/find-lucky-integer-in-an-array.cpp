class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int it:arr) mp[it]++;
        int lucky = -1;
        for(auto it:mp){
            if(it.second==it.first){
                lucky = max(lucky,it.first);
            }
        }
        return lucky;
    }
};