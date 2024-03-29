class Solution {
public:
    int countSubstrings(string s) {
        int ans = 0, size = s.size(), x = 0, y = 0;
        
        for(int i = 0; i < size; i++){
            x = i; y = i;
            while(x >= 0 && y < size && s[x] == s[y]){
                ans++;
                x--;
                y++;
            }
            
            x = i; y = i + 1;
            while(x >= 0 && y < size && s[x] == s[y]){
                ans++;
                x--;
                y++;
            }
        }
        
        return ans;
    }
};