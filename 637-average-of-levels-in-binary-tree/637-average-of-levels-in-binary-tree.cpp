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
    void solve(TreeNode* root, vector<double>& ans){        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            double size = q.size(), sum = 0;
            
            for(int i = 0; i < size; i++){
                auto temp = q.front();
                q.pop();
                
                sum += (temp -> val);
                
                if(temp -> left) q.push(temp -> left);
                if(temp -> right) q.push(temp -> right);
            }
            ans.push_back(sum / size);
        }
    }
    
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        solve(root, ans);
        return ans;
    }
};