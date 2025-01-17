class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int xorSum = 0;
        for(auto it:derived) xorSum ^= it;
        return xorSum==0;
    }
};