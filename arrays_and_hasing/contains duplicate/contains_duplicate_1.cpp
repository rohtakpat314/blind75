// O(n^2) and O(1) solved using array indexing and nested loops 

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) return true;
            }
        }

    return false; 
    }
    
};
