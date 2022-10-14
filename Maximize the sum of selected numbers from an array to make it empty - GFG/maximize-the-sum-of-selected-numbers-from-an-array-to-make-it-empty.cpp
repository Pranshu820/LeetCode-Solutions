//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
class Solution{
    public:
    int maximizeSum(int a[], int n) 
    {
        // Complete the function
        map<int, int> m;
        for(int i = 0; i < n; i++) m[a[i]]++;
        int ans = 0;
        
        while(!m.empty()){
            int temp = m.rbegin() -> first;
            
            ans += temp;
            m[temp]--;
            if(!m[temp]) m.erase(temp);
            
            if(m.find(temp - 1) != m.end()){
                m[temp - 1]--;
                if(!m[temp - 1]) m.erase(temp - 1);
            }
        }
        
        return ans;
    }

};


//{ Driver Code Starts.



int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}


// } Driver Code Ends