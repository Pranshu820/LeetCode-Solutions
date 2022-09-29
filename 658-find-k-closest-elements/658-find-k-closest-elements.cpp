class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        // 1 3 5 7 9
        vector<pair<int, int>> vp;
        for(int i = 0; i < arr.size(); i++){
            vp.push_back({abs(arr[i] - x), i});
        }
        
        sort(vp.begin(), vp.end());
        int temp = 0;
        
        for(auto &i : vp){
            temp++;
            ans.push_back(arr[i.second]);
            if(temp == k) break;
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};