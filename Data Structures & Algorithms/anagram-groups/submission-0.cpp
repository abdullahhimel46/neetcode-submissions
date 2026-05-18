class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        int n = str.size();
        if(n<2) return {str};
       
       map<string,vector<string>> mp;

       for(string w: str){
        string tmp = w;
        sort(tmp.begin(),tmp.end());

        mp[tmp].push_back(w);
       }

       vector<vector<string>> ans;

       for(auto [x,y]:mp){
        ans.push_back(y);
       }

       return ans;
    }

};
