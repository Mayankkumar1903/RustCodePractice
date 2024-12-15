class Solution {
public:
    double getDelta(int pass,int total){
        return (double)(pass+1)/(total+1) - (double)pass/total;
    }
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,pair<int,int>>>pq;
        int pass,total;
        for(int i=0;i<classes.size();i++){
            int pass = classes[i][0];
            int total = classes[i][1];
            //push in maxh so that we can know how much increment happens by adding one extra student 
            pq.push({getDelta(pass,total),{pass,total}});
        }

        //now assign extra students to each class
        while(extraStudents--){
            int pass = pq.top().second.first;
            int total = pq.top().second.second;
            pass++;
            total++;
            pq.pop();
            pq.push({getDelta(pass,total),{pass,total}});
        }

        //now we will calculate the average
        double average = 0.0;
        while(!pq.empty()){
            int pass = pq.top().second.first;
            int total = pq.top().second.second;
            average += (double) pass/total;
            pq.pop();
        }
        return average/classes.size();
    }
};