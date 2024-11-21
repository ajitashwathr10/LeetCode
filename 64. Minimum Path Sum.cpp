class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int dp[m+1][n+1];
        for(int i = 0; i <= n; i++) {
            dp[0][i] = 0;
        }
        for(int i = 0; i <= m; i++) {
            dp[i][0] = 0;
        }
        for(int i = 1;i <= n; i++){
          dp[1][i] = grid[0][i-1] + dp[1][i-1];
        }
        for(int j=1;j<=m;j++){
          dp[j][1]=grid[j-1][0]+dp[j-1][1];
        }
        for(int i = 2;i <= m;i++) {
            for(int j = 2;j <= n; j++) {
                dp[i][j] = grid[i-1][j-1] + min(dp[i][j-1],dp[i-1][j]); 
            }
        }
        return dp[m][n];
    }
};