class Solution {
public:
    int cntWays(int ind, int sum, vector<int>& nums, int n, int target, unordered_map<string, int>& memo) {
        if (ind == n) {
            return sum == target ? 1 : 0;
        }
        string key = to_string(ind) + "," + to_string(sum);
        if (memo.find(key) != memo.end()) {
            return memo[key];
        }
        int add = cntWays(ind + 1, sum + nums[ind], nums, n, target, memo);
        int subtract = cntWays(ind + 1, sum - nums[ind], nums, n, target, memo);
        memo[key] = add + subtract;
        return memo[key];
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<string, int> memo;
        return cntWays(0, 0, nums, nums.size(), target, memo);
    }
};
