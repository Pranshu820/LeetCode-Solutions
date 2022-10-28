//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

int mod = 1000000007;

class Solution {

 public:

 int NthTerm(int n){

     // Code  here

     long long int prev = 2;

     for(int i=2; i<=n; i++){

         prev = ((prev*i)+1)%mod;

     }

     

     return prev%mod;

 }

 

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.NthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends