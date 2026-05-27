class Solution {
public:
    vector<int> left_mx_heights(vector<int>& height, int& n){
        vector<int> left_mx(n);
        left_mx[0] = height[0]; // assume inital height is the left most height

        for(int i=1; i<n; i++){
            left_mx[i] = max(left_mx[i-1],height[i]);
        }

        return left_mx;
    }

    vector<int> right_mx_heights(vector<int>& height, int& n){
        vector<int> right_mx(n);
        right_mx[n-1] = height[n-1]; // assume last height is the right most height

        for(int i=n-2; i>=0; i--){
            right_mx[i] = max(right_mx[i+1],height[i]);
        }

        return right_mx;
    }


    int trap(vector<int>& height) {
        int n = height.size(), res=0;
        vector<int> left_mx = left_mx_heights(height,n);
        vector<int> right_mx = right_mx_heights(height,n);

        for(int i=0; i<n; i++){
            int h = min(left_mx[i],right_mx[i]) - height[i];
            res += h;
        }

        return res;
    }
};
