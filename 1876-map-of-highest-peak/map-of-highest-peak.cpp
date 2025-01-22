class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        queue<pair<int, int>> q;
        int n = isWater.size(), m = isWater[0].size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(isWater[i][j] == 1) {
                    q.push({i, j});
                    isWater[i][j] = 0;
                } else {
                    isWater[i][j] = -1;
                }
            }
        }

        vector<pair<int, int>> dir = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        while(!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            for(auto [dx, dy]: dir) {
                int nx = x + dx, ny = y + dy;
                if(nx >= 0 && ny >= 0 && nx < n && ny < m) {
                    if(isWater[nx][ny] == -1) {
                        isWater[nx][ny] = isWater[x][y] + 1;
                        q.push({nx, ny});
                    }
                }
            }
        }
        return isWater;
    }
};