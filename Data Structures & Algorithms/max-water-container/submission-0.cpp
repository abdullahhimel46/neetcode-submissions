class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0, n = heights.size();
        int i=0, j=n-1;
        
            while(i<j){
                int distance = j-i;
                int area = min(heights[i],heights[j]) * distance;

                res = max(res,area );

                if(heights[i]<heights[j]) i++;
                else j--;


            }
        
        return res;
    }
};
