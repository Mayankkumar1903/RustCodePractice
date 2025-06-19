class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        int cntPartitions = 0;
        int maxi = INT_MIN ,mini = INT_MAX;
        int n = nums.size();
        for(int i=0;i<n;i++){
            maxi = max(maxi,nums[i]);
            mini = min(mini,nums[i]);
            if(maxi-mini>k){
                cntPartitions++;
                maxi = nums[i];
                mini = nums[i];
            }
        }
        return cntPartitions+1;
    }
};