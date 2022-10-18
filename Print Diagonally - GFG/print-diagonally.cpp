//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> ans;
		
		for(int i = 0; i < N; i++){
		    int x = 0, y = i;
		    while(x < N && y >= 0){
		        ans.push_back(A[x][y]);
		        x++; y--;
		    }
		}
		
		for(int i = 1; i < N; i++){
		    int x = i, y = N - 1;
		    while(x < N && y >= 0){
		        ans.push_back(A[x][y]);
		        x++; y--;
		    }
		}
		
		return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends