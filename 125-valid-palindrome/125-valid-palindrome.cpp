class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
		for(int i = 0; i < s.size(); i++){
			if(s[i] >= 65 && s[i] <= 90) temp.push_back(s[i] + 32);
			else if((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)) temp.push_back(s[i]);
		}
		
		int l = 0, r = temp.size() - 1;
		
		while(l < r){
			if(temp[l] != temp[r]) return 0;
			l++;
			r--;
		}
		
		return 1;
    }
};