class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        map<char,int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int res=0;

        for(int i=0; i<n; i++){
            if(i+1<n && roman[s[i]]<roman[s[i+1]])
                res-=roman[s[i]]; // IV
            else
                res+=roman[s[i]]; //VI
        }
        return res;
        
    }
};