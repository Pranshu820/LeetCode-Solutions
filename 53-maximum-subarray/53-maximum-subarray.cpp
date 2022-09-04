class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = 0, max_sum = INT_MIN, n = nums.size();
        for(int i = 0; i < n; i++){
            ans += nums[i];
            max_sum = max(ans, max_sum);
            if(ans < 0) ans = 0;
        }
        
        return max_sum;
    }
};