class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int temp = nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[j-1]) temp += nums[j];
                else break;
            }
            maxSum = max(maxSum,temp);
        }
        return maxSum;
    }
};