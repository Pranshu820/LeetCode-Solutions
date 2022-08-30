




class Solution{
    public:
int find(int i,int j,vector<int>& nums,vector<vector<int>>& dp){
    if(i+1==j) return 0;
    
    if(dp[i][j]!=-1) return dp[i][j];
    
    int ans=0;
    for(int k=i+1;k<j;k++){
        ans=max(ans,nums[i]*nums[k]*nums[j] + find(i,k,nums,dp) + find(k,j,nums,dp)); 
    }
    
    dp[i][j]=ans;
    return ans;
}

int maxCoins(vector<int>& nums) {
    int n=nums.size();
    nums.insert(nums.begin(),1);
    nums.push_back(1);
    
    int output=0;
    vector<vector<int>> dp(n+2,vector<int> (n+2,-1));
    output=find(0,n+1,nums,dp);
    return output;
}
};