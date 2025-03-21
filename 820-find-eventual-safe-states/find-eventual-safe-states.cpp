class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>adjrev[n];
        vector<int> indegree(n,0);
        for(int i=0;i<n;i++){
            for(auto it:graph[i]){
                indegree[i]++;
                adjrev[it].push_back(i);
            }
        }

        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0) q.push(i);
        }

        vector<int>safe;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            safe.push_back(node);
            for(auto it:adjrev[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        sort(begin(safe),end(safe));
        return safe;
    }
};