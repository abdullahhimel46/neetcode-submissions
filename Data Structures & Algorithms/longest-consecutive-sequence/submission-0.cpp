class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        set<int> st;
        for(int x:nums){
            st.insert(x);
        }

        int longest=0;
        for(int x:st){
            if(st.find(x-1) == st.end()){
                int len = 1;

                while(st.find(x+1) != st.end()){
                    len++;
                    x++;
                }

                longest=max(longest,len);
            }

        }

        return longest;
    }
};
