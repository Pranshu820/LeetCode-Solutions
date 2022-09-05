/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        vector<vector<int>> ans;
        vector<int> temp;
        int size = 0;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            size = q.size();
            
            for(int i = 0; i < size; i++){
                Node* temp_node = q.front();
                q.pop();
                temp.push_back(temp_node -> val);
                for(auto chi : temp_node -> children) q.push(chi);
            }
            
            ans.push_back(temp);
            temp.clear();
        }
        
        return ans;
    }
};