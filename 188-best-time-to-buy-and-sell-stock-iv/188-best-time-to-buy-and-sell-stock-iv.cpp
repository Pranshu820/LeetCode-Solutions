class Solution {
public:
    int maxProfit(int k, vector<int>& price) {
        
        vector<int> dp(2*k+1, INT_MIN);
        dp[0] = 0;
        
        for(int j = 0; j < price.size(); j++) {
            
            for(int i = 0; i+2 <= 2*k; i += 2){
                
                dp[i+1] = max(dp[i+1], dp[i]-price[j]);
                dp[i+2] = max(dp[i+2], dp[i+1]+price[j]);
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};