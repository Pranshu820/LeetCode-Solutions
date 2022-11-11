//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int n){
        // code here
        vector<bool> prime(n + 1, true);
        
        for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    
    int l = 1, r = n;
    
    while(l < r){
        if(prime[l] && prime[r]){
            if(l + r == n) return "Yes";
            else if(l + r > n) r--;
            else l++;
        }
        
        else if(prime[l]) r--;
        else l++;
    }
    
    return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends