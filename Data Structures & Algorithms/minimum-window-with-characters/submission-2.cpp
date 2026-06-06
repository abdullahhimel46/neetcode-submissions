class Solution {
public:
    string minWindow(string s, string t) {
        int ls = s.size();
        int lt = t.size();

        if(lt>ls) return "";

        int i=0, j=0, sIdx=-1, minLen=INT_MAX, cnt=lt;
        // unordered_map<char,int> freq;
        vector<int> freq(128,0);
        for(char c:t)
            freq[c]++;

        while(j<ls){
            // hanlding the ending part of s
            char cj = s[j];
            if(freq[cj]>0)
                cnt--;
            freq[cj]--;
            j++;

            while(cnt==0) { // valid window
                if(j-i < minLen){
                    minLen = j-i;
                    sIdx = i;
                }

                // hanlding the starting part of s
                char ci = s[i];
                //shrinking
                freq[ci]++;
                if(freq[ci]>0)
                    cnt++;
                i++;
            }
        }

        return (minLen == INT_MAX) ? "" : s.substr(sIdx,minLen);
    }
};
