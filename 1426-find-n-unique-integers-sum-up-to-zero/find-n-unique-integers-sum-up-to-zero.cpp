class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>res;
        if(n%2!=0){
            int i=0;
            while(i<n/2){
                res.push_back(i+1);
                res.push_back(-(i+1));
                i++;
            }
            res.push_back(0);
            return res;
        }
        int i=0;
        while(i<n/2){
            res.push_back(i+1);
            res.push_back(-(i+1));
            i++;
        }
        return res;
    }
};