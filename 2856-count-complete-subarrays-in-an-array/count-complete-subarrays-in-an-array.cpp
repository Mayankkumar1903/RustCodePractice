class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int>st;
        for(auto it:nums) st.insert(it);
        int distinct = st.size();
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            unordered_set<int>temp;
            for(int j=i;j<nums.size();j++){
                temp.insert(nums[j]);
                if(temp.size()==distinct) cnt++;
            }
        }
        return cnt;
    }
};