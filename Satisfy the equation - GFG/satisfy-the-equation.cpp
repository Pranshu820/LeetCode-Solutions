//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> satisfyEqn(int A[], int N) {

        unordered_map<int, vector<int>> map;

        vector<int> ans;

        for(int i = 0; i < N - 1; i++){

            for(int j = i + 1; j < N; j++){

                int store = A[i] + A[j];

                if(map.count(store) == 1){

                    if((map[store][0] != i and map[store][1] != j) and (map[store][0] != j and map[store][1] != i)){

                        map[store].push_back(i);

                        map[store].push_back(j);

                        if(ans.size() == 0 or ans > map[store]){

                            ans = map[store];

                        }

                    }

                }else{

                        map[store].push_back(i);

                        map[store].push_back(j);

                }

            }

        }

        

        if(ans.empty()){

            return {-1, -1, -1, -1};

        }

        

        return ans;

            

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        vector<int> ptr = ob.satisfyEqn(A,N);
        
        cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl;
    }
    return 0;
}
// } Driver Code Ends