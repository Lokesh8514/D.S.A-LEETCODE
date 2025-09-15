class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int sr=0;
        int sc=0;
        int er=m-1;
        int ec=n-1;
        int count=0;
        int total_elements=m*n;
        while(count<total_elements){
            //printing starting row
            for(int i=sc;i<=ec&&count<total_elements;i++){
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
             //printing ending col
            for(int i=sr;i<=er&&count<total_elements;i++){
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--; 
            //printing ending row
            for(int i=ec;i>=sc&&count<total_elements;i--){
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--; 
            //printing starting col
            for(int i=er;i>=sr&&count<total_elements;i--){
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;

        }
        return ans;
    }
};