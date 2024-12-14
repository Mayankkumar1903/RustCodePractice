class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        map<int,int>mp;
        int left = 0 , right = 0;
        long long count = 0;
        while(right < nums.size()){
            mp[nums[right]]++;
            while(mp.rbegin()->first - mp.begin()->first > 2){
                mp[nums[left]]--;
                if(mp[nums[left]] == 0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            count += right-left+1;
            right++;
        }
        return count;
    }
};