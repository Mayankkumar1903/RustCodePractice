class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        unordered_map<int,pair<int,int>>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp.insert({mat[i][j],{i,j}});
            }
        }

        vector<int>row(n,0) , col(m,0);
        for(int i=0;i<arr.size();i++){
            int r = mp[arr[i]].first;
            int c = mp[arr[i]].second;
            row[r]++;
            col[c]++;
            if(row[r] == m) return i;
            if(col[c] == n) return i;
        }
        return arr.size()-1;
    }
};