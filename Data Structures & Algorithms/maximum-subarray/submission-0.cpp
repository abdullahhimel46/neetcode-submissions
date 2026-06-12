class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int curSum=0, mxSum=INT_MIN;

        for(int i=0; i<n; i++){
            curSum+=nums[i];
            
            mxSum=max(curSum,mxSum);

            if(curSum<0)
                curSum=0;
        }
        return mxSum;
    }
};
