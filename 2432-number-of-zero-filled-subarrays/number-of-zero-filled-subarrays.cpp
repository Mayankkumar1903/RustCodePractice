class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long totZeroes = 0;
        int i = 0;
        while (i < nums.size()){
            if(nums[i]==0){
                long long cnt = 0;
                while(i < nums.size() && nums[i]==0){
                    cnt++;
                    i++;
                }
                totZeroes += (cnt * (cnt + 1)) / 2;
            } else {
                i++;
            }
        }
        return totZeroes;
    }
};