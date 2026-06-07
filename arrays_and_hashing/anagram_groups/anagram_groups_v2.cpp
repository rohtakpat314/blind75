// time: O(n*klog(k)), space: O(n*k) 

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // hashmap, map all sorted strings to all og strings that share the same sorted state
        std::unordered_map<string, vector<string>> groups; 

        // for every string in strs vector, sort a copy of it from begin to end 
        for (auto& str: strs) { 
            string sorted = str; 
            sort(sorted.begin(), sorted.end());
            groups[sorted].push_back(str); // use the sorted string as a hashmap key, all anagrams produce equivalent keys 
        }

        vector<vector<string>> result; // store groups 
        for (auto& group: groups) { 
            result.push_back(group.second); // for all groups in the hashmap, push the anagram groups
        }

      // example ... if strs = { bird, dirb, ridb, cat, tac, act } , then 
      //
      // { 
      //   "bdir"  : {"bird", "dirb", "ridb"},
      //   "act"   : {"cat", "tac", "act"} 
      // }
      //
      // Iterate through every key-value pair in the hashmap. 
      // group.second contains the vector of anagrams associated with
      // the current key, which is appended to result. 
      //
      // so { {"bird, "dirb", "ridb" } } is the new vector. 
      //
      // so { {"bird, "dirb", "ridb"}, {"cat", "tac", "act" } }
      //
      // return result. or vector of vector of strings
      
        return result; 
    }
};
