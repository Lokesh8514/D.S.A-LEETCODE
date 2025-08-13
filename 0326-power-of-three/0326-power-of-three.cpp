class Solution {
public:

    bool isPowerOfThree(int n) {
        return n>0 && 1162261467 % n == 0;
        // if(n==0)
        // return false;
        // double a = log(n) / log(3);
        // return fabs(a - round(a)) < 1e-10;

        // double a=log(n)/log(3);
        // cout<<a;
        // cout<<floor(a);
        // if(a==floor(a))
        // return true;
        // else
        // return false;
        
    }
};