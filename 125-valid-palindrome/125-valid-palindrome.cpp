class Solution {
public:
    bool alpha(char c){
        if((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return 1;
        return 0;
    }
    
    char check(char c){
        if((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')) return c;
        c += 32;
        return c;
    }
    
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        
        while(l < r){
            if(!alpha(s[l])){
                l++;
                continue;
            }
            if(!alpha(s[r])){
                r--;
                continue;
            }
            
            if(check(s[l]) != check(s[r])) return 0;
            l++;
            r--;
        }
        
        return 1;
    }
};