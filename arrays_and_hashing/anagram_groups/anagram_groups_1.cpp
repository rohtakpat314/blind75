// solved in O(n*k) time and O(n*k) space

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string,vector<string>> anagram_groups; 

        for (auto& str : strs) { 
            int count[26] = {0}; 
            for (char& ch : str) {
                count[ch - 'a']++;
            }
            string key; 
            for (int i = 0; i < 26; i++) {
                key += '#';
                key += to_string(count[i]);
            }
            anagram_groups[key].push_back(str);
        }
        vector<vector<string>> solution; 
        for (auto& [key,group] : anagram_groups) {
            solution.push_back(move(group));
        }
        return solution;
    }
};
