class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>res;
        vector<int>ind;
        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='1') ind.push_back(i);
        }
        for(int i=0;i<boxes.size();i++){
            int steps = 0;
            for(auto it:ind){
                steps += abs(i-it);
            }
            res.push_back(steps);
        }
        return res;
    }
};