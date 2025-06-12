class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxDiff = 0;
        for(int i=1;i<nums.size();i++){
            maxDiff = max(maxDiff,abs(nums[i]-nums[i-1]));
        }
        maxDiff = max(maxDiff,abs(nums[0]-nums[nums.size()-1]));
        return maxDiff;
    }
};