class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = INT_MAX, ans = 0;
        for(auto &i : prices){
            low = min(low, i);
            ans = max(ans, i - low);
        }
        
        return ans;
    }
};