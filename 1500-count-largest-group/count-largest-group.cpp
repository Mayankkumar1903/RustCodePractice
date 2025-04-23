class Solution {
public:
    int calcSum(int n){
        int sum = 0;
        while(n){
            sum += n%10;
            n/=10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        unordered_map<int,int>mp;
        for(int i=1;i<=n;i++){
            int sum = calcSum(i);
            mp[sum]++;
        }
        int maxGroup = 0;
        for(auto it:mp){
            maxGroup = max(maxGroup,it.second);
        }

        int cnt = 0;
        for(auto it:mp){
            if(it.second == maxGroup) cnt++;
        }
        return cnt;
    }
};