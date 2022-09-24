/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> ans;
    
    void dfs(TreeNode* node, int target, vector<int>& temp){
        if(!node) return;
        temp.push_back(node -> val);
        target -= node -> val;
        
        if(!node -> left && !node -> right){
            if(!target) ans.push_back(temp);
        }
        
        else{
            dfs(node -> left, target, temp);
            dfs(node -> right, target, temp);
        }
        
        temp.pop_back();
    }
        
    vector<vector<int>> pathSum(TreeNode* root, int targetSum){
        vector<int> temp;
        dfs(root, targetSum, temp);
        return ans;
    }
};