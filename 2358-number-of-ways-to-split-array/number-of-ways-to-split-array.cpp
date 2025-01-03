class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long  totSum = 0;
        for(int i:nums) totSum += i;
        long long  currSum = 0;
        int cnt = 0;
        for(int i=0;i<nums.size()-1;i++){
            currSum += nums[i];
            if(currSum >= (totSum-currSum)) cnt++;
        }
        return cnt;
    }
};