class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        

        std::unordered_map<int, int> map; // used to count frequencies 

        for (int num: nums) {
            int keynum = num; 
            map[keynum] += 1; // increase frequency for all matching keynums 
        }

        vector<int> result; // create result vector 

        std::priority_queue<pair<int,int>> maxHeap; // make max heap to find most frequent elements 

        for (auto& [num,count] : map) {
            maxHeap.push({count,num}); // put in reverse order, so count comes first to ease sorting 
        }

        for (int i = 0; i < k; i++) {
            result.push_back(maxHeap.top().second); // put the numerical value corresponding to the most frequent element in vector
            maxHeap.pop(); // pop, and repeat for k-most frequent elements 
        }


        return result; 
        
    }
};
