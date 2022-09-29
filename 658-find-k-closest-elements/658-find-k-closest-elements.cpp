class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int l = 0, r = arr.size () - 1;
        while (r - l >= k) {
            if (abs(arr[l] - x) > abs(arr[r] - x)) l++;
            else r--;
        }
        
        vector <int> v(arr.begin() + l, arr.begin() + r + 1);
        // for (int i = l; i <= r; i++) v.push_back(arr[i]);
        return v;
    }
};
