class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k) return false;
        vector<int>freq(26,0);
        for(auto it:s ) freq[it-'a']++;
        int cntOddFreq = 0;
        for(auto it:freq) if(it%2 != 0) cntOddFreq++;
        return cntOddFreq > k ? false : true;
    }
};