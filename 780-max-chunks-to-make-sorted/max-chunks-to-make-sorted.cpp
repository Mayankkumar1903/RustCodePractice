class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        //keep the greatest element till now 
        // break into chunks if next element is greater than prev
        int cnt = 0;
        int n = arr.size();
        if(n==0)return 0;
        int maxi = 0;
        for(int i=0;i<n;i++){
            maxi = max(maxi ,arr[i]);
            if(maxi == i) cnt++;
        }
        return cnt;
    }
};