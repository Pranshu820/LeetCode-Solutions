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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        queue<pair<TreeNode*, pair<int, int>>> q;
        map<int, map<int, multiset<int>>> m;
        q.push({root, {0, 0}});
        
        while(q.size()){
            auto temp = q.front();
            q.pop();
            TreeNode* node = temp.first;
            int x = temp.second.first, y = temp.second.second;
            m[x][y].insert(node -> val);
            
            if(node -> left) q.push({node -> left, {x - 1, y + 1}});
            if(node -> right) q.push({node -> right, {x + 1, y + 1}});
        }
        
        for(auto &i : m){
            vector<int> x;
            for(auto &ii : i.second){
                x.insert(x.end(), ii.second.begin(), ii.second.end());
            }
            ans.push_back(x);
        }
        
        return ans;
    }
};