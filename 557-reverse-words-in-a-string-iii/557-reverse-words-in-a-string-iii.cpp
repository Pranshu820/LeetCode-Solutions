class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');
        string ans = "", temp = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                reverse(temp.begin(), temp.end());
                ans.append(temp);
                ans.push_back(' ');
                temp = "";
            }
            else temp.push_back(s[i]);
        }
        
        ans.erase(ans.begin() + ans.size() - 1);
        
        return ans;
    }
};