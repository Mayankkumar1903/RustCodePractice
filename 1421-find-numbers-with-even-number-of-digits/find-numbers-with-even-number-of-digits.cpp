class Solution {
public:
    int cntDigits(int n ){
        int cnt = 0;
        while(n){
            n/=10;
            cnt++;
        }
        return cnt%2==0 ? true : false;
    }
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(int it:nums) if(cntDigits(it)) cnt++;
        return cnt;
    }
};