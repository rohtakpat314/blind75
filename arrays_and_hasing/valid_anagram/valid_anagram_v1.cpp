// O(n) time, O(k) space complexity where k = number of unique characters in the input strings 

#include <string> 

class Solution {
public:
    bool isAnagram(string s, string t) {

        // if lengths aren't equal return false since anagrams have equal length and char frequency 
        if (s.length() != t.length()) {
            return false; 
        }    

        // initialize integer array with 26 elements for keeping track of count 
        int s_count[26] = {0};
        int t_count[26] = {0}; 

        for (int i = 0; i < s.length(); i++) {
            s_count[s.at(i) - 'a'] += 1; // if s.at(i) = 'a', then increment corresponding index 0 by 1 in count array
            t_count[t.at(i) - 'a'] += 1; // same logic as above but for string t 
        }

        /* measuring frequency of char --> only 26 chars in alphabet 
         * if the count of chars ISNT the same, then its not a valid anagram
         * so return false...
         *
         * else, return true at the end of the program 
         */ 

        for (int j = 0; j < 26; j++) { 
            if (s_count[j] != t_count[j]) {
                return false;
            }
        }

        return true; 
    }
};
