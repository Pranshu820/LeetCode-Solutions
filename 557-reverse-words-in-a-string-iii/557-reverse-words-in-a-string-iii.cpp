class Solution {
public:
    string reverseWords(string s) {
        int i = 0, size = s.size();
        for(int j = 0; j < size; j++){
            if(s[j] == ' '){
                reverse(s.begin() + i, s.begin() + j);
                i = j + 1;
            }
        }
        
        reverse(s.begin() + i, s.end());
        return s;
    }
};