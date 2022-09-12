class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size() == 1){
            if(power >= tokens[0]) return 1;
            return 0;
        }
        
        int score = 0;
        sort(tokens.begin(), tokens.end());
        
        int l = 0, r = tokens.size() - 1;
        // 100, 200
        // power = 50, score = 1
        
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