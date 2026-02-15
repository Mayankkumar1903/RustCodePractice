class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>freq,freqCount;
        for(int i:nums){
            freq[i]++;
        }
        for(auto it:freq){
            freqCount[it.second]+=1;
        }
        for(int i:nums){
            if(freqCount[freq[i]]==1){
                return i;
            }
        }
        return -1;
    }
};