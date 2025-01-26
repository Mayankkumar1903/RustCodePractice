class Solution {
public:
    int countPartitions(vector<int>& nums) {
       int n=nums.size();
        int total=0;
        int cnt=0;
               
        for(int i=0; i<n; i++){
            total+=nums[i];
        }

        int sumLeft=0;
        for(int i=0; i<n-1; i++){  
            sumLeft+=nums[i];          
            if( (sumLeft-(total-sumLeft))%2==0 ){ 
                cnt++;
            }
        }
        
        return cnt;
    }
};