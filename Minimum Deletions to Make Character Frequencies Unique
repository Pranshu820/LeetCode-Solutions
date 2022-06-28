class Solution {
public:
    int minDeletions(string s) {
        vector<int> vec(26); // create a vector of size 26 to store frequencies of char elements
        
        for(auto element : s){ 
            vec[element - 'a']++; // traverse the entire string s and increment freq of each char element
        }
        
        // sort the frequencies in descending order to get largest freq in 0th index
        sort(vec.begin(),vec.end(), greater<int>());
        
        // keep max_allowed_freq with largest frequency
        int max_allowed_freq = vec[0];
        int ans=0;
        
        for(auto freq : vec) {
            if(freq > max_allowed_freq) // if this freq is greater than max_allowed_freq
            {
                if(max_allowed_freq>0)
                    ans+=(freq-max_allowed_freq); // lower down the frequency of current element to freq
                else
                    ans+=freq; //if it is smaller than or equal to zero we have to delete
            }
            max_allowed_freq=min(max_allowed_freq-1,freq-1); //reducing max_allowed_freq
        }
        return ans;
    }
};
