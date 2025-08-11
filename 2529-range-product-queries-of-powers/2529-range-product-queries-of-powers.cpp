class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        const unsigned int M = 1000000007;
         vector<int>arr;
        double a=log2(n);
        if(a==floor(a)){
            arr.push_back(n);
        }
        else{
            int i=0; 
           while(n){
               if(n&1){
                   arr.push_back(pow(2,i));
               }
               i++;
               n=n>>1;
           }
        }
        vector<int>ans;
        for(int k=0;k<queries.size();k++){
            long long product=1;
            int left=queries[k][0];
            int right=queries[k][1];
            for(int j=left;j<=right;j++){
              product = (product * arr[j]) % M;
            }
            ans.push_back(product % M);
        }
        return ans;
    
    }

       
};