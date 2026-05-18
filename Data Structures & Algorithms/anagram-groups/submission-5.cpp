class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        // int n = str.size();
        // if (n < 2) return {str};

        map<vector<int>, vector<string>> mp;

        for (string w : str) {
            vector<int> freq(26, 0);
            for (char c : w) {
                freq[c - 'a']++;
            }

            mp[freq].push_back(w);
        }

        vector<vector<string>> ans;

        for (pair<std::vector<int>, std::vector<string>> y : mp) {
            ans.push_back(y.second);
        }

        return ans;
    }
};
