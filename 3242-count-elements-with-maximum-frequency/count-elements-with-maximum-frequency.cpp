class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int it:nums) mp[it]++;
        int maxi = 0;
        for(auto it:mp) maxi = max(maxi,it.second);
        int cnt = 0;
        for(int it:nums){
            if(mp[it]==maxi) cnt++;
        }
        return cnt;
    }
};