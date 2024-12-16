class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> minh;
        for(int i=0;i<nums.size();i++){
            minh.push({nums[i],i});
        }
        while(k){
            int temp = minh.top().first;
            int ind = minh.top().second;
            minh.pop();
            minh.push({temp*multiplier,ind});
            k--;
        }
        vector<int>res(nums.size(),0);
        while(minh.size()>0){
            int temp = minh.top().first;
            int ind = minh.top().second;
            res[ind] = temp;
            minh.pop();
        }
        return res;
    }
};