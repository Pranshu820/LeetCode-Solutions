class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(!root)  return ans;
        queue<Node*> q;
        q.push(root); 
        while(!q.empty()) {
            int n = q.size(); 
            vector<int> level;
            for(int i = 0; i < n; i++){
                Node* node = q.front();
                q.pop();
                level.push_back(node->val);
                for(auto n : node->children) q.push(n); 
            }
            ans.push_back(level);
        }
        return ans;
    }
};