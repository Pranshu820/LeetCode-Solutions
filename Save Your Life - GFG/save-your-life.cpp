//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string maxSum(string &w, char x[], int b[], int n){
        unordered_map<char, int> asc;
        for(int i=0; i<n; i++) {
            asc[x[i]]=b[i];
        }
        int maxHere=0, maxSoFar=INT_MIN, m=w.size();
        int ei=-1;
        for(int i=0; i<m; i++) {
            if(asc.count(w[i])) {maxHere+=asc[w[i]];}
            else {maxHere+=w[i];}
            if(maxSoFar<maxHere) {
                maxSoFar=maxHere;
                ei=i;
            }
            if(maxHere<0) {
                maxHere=0;
            }
        }
        string str;
        maxHere=0;
        for(int i=ei; i>=0; i--) {
            str+=w[i];
            if(asc.count(w[i])) {maxHere+=asc[w[i]];}
            else {maxHere+=w[i];}
            if(maxHere==maxSoFar) {
                break;
            }
        }
        reverse(str.begin(), str.end());
        return str;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends