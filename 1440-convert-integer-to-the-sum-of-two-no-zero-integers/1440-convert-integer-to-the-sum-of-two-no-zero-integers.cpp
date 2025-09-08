class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        auto check = [](int x) {
            while (x > 0) {
                if (x % 10 == 0) return false;
                x /= 10;
            }
            return true;
        };
        for (int i = 1; i < n; ++i) {
            int j = n - i;
            if (check(i) && check(j)) {
                return {i, j};
            }
        }
        return {};
    }
};
// class Solution {
// public:
//     vector<int> getNoZeroIntegers(int n) {
//        if(n<10)
//        {return {1,n-1};}
//        int count=0;
//        int x=0;
//        int N=n;
//        while(N>0){
//         count++;
//         if(N%10==0)
//         x=count;

//         N=N/10;
//        }
//        	int a=(n/pow(10,x));
// 	//cout<<a<<endl;
// 	int A=a*pow(10,x);
// 	//cout<<A<<endl;
// 	int b=n-A+1;
// 	// cout<<b<<" "<<A-1;
//     if(x==0){
//         if(n%10==1)
//         return{2,n-2};
//         else
//         return {1,n-1};
//     }
//     else
//     return {b,A-1};
//     }
// };