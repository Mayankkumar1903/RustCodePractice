class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>mp;
        vector<int> res;
        for(int i=0;i<A.size();i++){
            mp[A[i]]++;
            mp[B[i]]++;
            int cnt = 0;
            for(auto it:mp) if(it.second == 2) cnt++;
            res.push_back(cnt);
        }
        return res;
    }
};