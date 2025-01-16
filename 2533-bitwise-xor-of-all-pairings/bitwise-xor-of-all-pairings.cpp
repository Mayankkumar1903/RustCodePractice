class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int xor1 = 0 , xor2 = 0;
        for(auto it:nums1) xor1 ^= it;
        for(auto it:nums2) xor2 ^= it;
        int n = nums1.size() , m = nums2.size();
        if(n%2 == 0) xor2 = 0;
        if(m%2 == 0) xor1 = 0;
        return xor1^xor2;
    }
};