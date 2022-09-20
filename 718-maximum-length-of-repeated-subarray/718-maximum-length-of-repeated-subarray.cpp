class Solution {
public:
    int findLength(vector<int>& S1, vector<int>& S2) {
        int n = S1.size(), m = S2.size();
        int dp[n + 1][m + 1];
        for(int i = 0; i < n; i++){
            dp[i][0] = 0;
        }
        for(int j = 0; j < m; j++){
            dp[0][j] = 0;
        }
        int ans = 0;
        for(int i = 1; i  <= n; i++){
            for(int j = 1; j <= m; j++){
               if(S1[i - 1] == S2[j - 1]){
                   dp[i][j] = 1 + dp[i - 1][j - 1];
                   ans = max(dp[i][j], ans);
               } 
               else{
                   dp[i][j] = 0;
               }
            }
        }
        return ans;

    }
};