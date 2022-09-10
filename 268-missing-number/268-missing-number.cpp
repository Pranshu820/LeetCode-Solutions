class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int length = nums.size();
        int sum1 = (length * (length + 1)) / 2, sum2 = accumulate(nums.begin(), nums.end(), 0);
        return sum1 - sum2;
    }
};