class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());
        
        while(pq.size() > 1){
            int stone1 = pq.top();
            pq.pop();
            
            int stone2 = pq.top();
            pq.pop();
            
            pq.push(stone1 - stone2);
        }
        
        return pq.top();
    }
};