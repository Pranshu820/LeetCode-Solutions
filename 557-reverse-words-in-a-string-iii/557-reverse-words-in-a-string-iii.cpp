class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');
        string ans = "", temp = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                reverse(temp.begin(), temp.end());
                ans.append(temp);
                if(i != s.size() - 1) ans.push_back(' ');
                temp = "";
            }
            else{
                temp.push_back(s[i]);
            }
        }
        
        return ans;
    }
};