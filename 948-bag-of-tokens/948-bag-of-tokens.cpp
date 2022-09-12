class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0;
        sort(tokens.begin(), tokens.end());
        
        int l = 0, r = tokens.size() - 1;
        
        while(l <= r){
            if(power >= tokens[l]){
                power -= tokens[l];
                score++;
                l++;
            }
            
            else{
                if(!score) return 0;
                if(r - l <= 1) return score;
                power += tokens[r];
                score--;
                r--;
            }
        }
        
        return score;
    }
};