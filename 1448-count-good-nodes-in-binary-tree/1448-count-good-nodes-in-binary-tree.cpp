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
    int solve(TreeNode* root, int maxi, int& ans){
        if(!root) return 0;
        if(root -> val >= maxi){
            maxi = root -> val;
            ans++;
        }
        
        solve(root -> left, maxi, ans);
        solve(root -> right, maxi, ans);
        
        return ans;
    }
    
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        int ans = 0, maxi = INT_MIN;
        solve(root, maxi, ans);
        return ans;
    }
};