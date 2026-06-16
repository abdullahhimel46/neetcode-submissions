class Solution {
public:
    bool canFinish(vector<int> piles, int h, int mid){
        int totHours=0;
        for(int pile: piles)
            totHours += ceil((double)pile/mid);

        return totHours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int r=1, l=INT_MIN, ans =0;
        
         for(int pile: piles)
            l=max(l,pile);

        while(r<=l) {
            int mid=(l+r)/2;

            if(canFinish(piles,h,mid)){
                ans=mid;
                l=mid-1;
            }else
                r=mid+1;
        }

        return ans;
    }
};
