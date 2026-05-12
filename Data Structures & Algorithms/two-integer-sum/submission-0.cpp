class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> res;
        // unordered_map<number,index>
        for(int i=0; i<n; i++){
            int need = target - nums[i];
            if(res.count(need))
                return {res[need],i};

            res[nums[i]]=i;
            // i'th num ke i'th index e store korlam
        }

        return {};
    }
};
