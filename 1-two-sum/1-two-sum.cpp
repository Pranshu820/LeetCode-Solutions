class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            if(m.find(target - nums[i]) == m.end()) m[nums[i]] = i;
            else return {m[target - nums[i]], i};
        }
        
        return {};
    }
};