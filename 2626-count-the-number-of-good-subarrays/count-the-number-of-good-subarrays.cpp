class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long cnt = 0;
        unordered_map<int,int>mp;
        for(int i=0,left=0;i<nums.size();i++){
            k -= mp[nums[i]]++;
            while(k<=0) k+= --mp[nums[left++]];
            cnt += left;
        }
        return cnt;
    }
};