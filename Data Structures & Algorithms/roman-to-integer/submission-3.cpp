class Solution {
public:
    int getRomanVal(char c){
        switch(c) {
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;

            default : return 0;
        }
    }

    int romanToInt(string s) {
        int n = s.size();
        int res=0;

        int i=0, j=i+1;
        while(j<n) {
            int cur = getRomanVal(s[i]);
            if(getRomanVal(s[i])<getRomanVal(s[j]))
                res-=cur;
            else res+=cur;

            i++;j++;
        }
        res+=getRomanVal(s[n-1]);
        return res;
        
    }
};