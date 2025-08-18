class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        /*Declare an unordered_map to group strings by their sorted version
        Key: Sorted string
         Value: Vector of strings that are anagrams of each other*/
        unordered_map<string, vector<string>> mp;
        
        // Iterate through each string in the input vector
        for (string x : strs) {
            string word = x;              // Make a copy of the current string
            sort(word.begin(), word.end()); // Sort the string alphabetically to create a unique key for anagrams
            mp[word].push_back(x);        // Add the original string to the vector corresponding to the sorted key
        }
        
        // Declare a result vector to store grouped anagrams
        vector<vector<string>> ans;
        for (auto x : mp) {
            ans.push_back(x.second);      // Add each group of anagrams (values in the map) to the result
        }
        
        return ans;                       
    }
};