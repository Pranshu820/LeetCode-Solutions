class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int pre_sum = 0;
        vector<int> ans;
        for(auto &i : nums) if(!(i & 1)) pre_sum += i;
        
        for(auto &i : queries){
            if(nums[i[1]] & 1){
                nums[i[1]] += i[0];
                if(!((nums[i[1]]) & 1)){
                    pre_sum += nums[i[1]];
                }
                ans.push_back(pre_sum);
            }
            
            else{
                pre_sum -= nums[i[1]];
                nums[i[1]] += i[0];
                if(!((nums[i[1]]) & 1)){
                    pre_sum += nums[i[1]];
                }
                ans.push_back(pre_sum);
            }
        }
        
        return ans;
    }
};