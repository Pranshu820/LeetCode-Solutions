class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>> pq(stones.begin(), stones.end());
        
        while(pq.size() > 1){
            int stone1 = pq.top();
            pq.pop();
            
            // if(pq.size() == 1){
            //     int temp = pq.top();
            //     if(temp == stone1) return temp;
            //     else{
            //         return max(temp - stone1, stone1 - temp);
            //     }
            // }
            
            int stone2 = pq.top();
            pq.pop();
            
            if(stone1 > stone2) pq.push(stone1 - stone2);
            else if(stone1 < stone2) pq.push(stone2 - stone1);
        }
        
        if(pq.empty()) return 0;
        return pq.top();
    }
};