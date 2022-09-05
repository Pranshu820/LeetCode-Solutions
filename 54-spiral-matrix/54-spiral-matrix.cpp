class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
        int m = v.size(), n = v[0].size();
        vector<int> ans;
        
        int r1 = 0, c1 = 0, r2 = m - 1, c2 = n - 1, dir = 0; // 4 directions
        // after changing diretions 4 times, recursion comes in place
        // self similar reduced question 
        
        // while(r1 <= r2 && c1 <= c2){
        while(ans.size() != n * m){
            if(!dir){
                for(int i = c1; i <= c2; i++){
                    ans.push_back(v[r1][i]);
                }
                r1++;
            }
            
            if(dir == 1){
                for(int i = r1; i <= r2; i++){
                    ans.push_back(v[i][c2]);
                }
                c2--;
            }
            
            if(dir == 2){
                for(int i = c2; i >= c1; i--){
                    ans.push_back(v[r2][i]);
                }
                r2--;
            }
            
            if(dir == 3){
                for(int i = r2; i >= r1; i--){
                    ans.push_back(v[i][c1]);
                }
                c1++;
            }
            
            dir++;
            dir %= 4;
        }
        
        return ans;
    }
};