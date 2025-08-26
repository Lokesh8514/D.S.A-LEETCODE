class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int m=dimensions.size();
        int ldong=INT_MIN;
        int dong=INT_MIN;
        int area=0;
        for(int i=0;i<m;i++){
            int a = dimensions[i][0]*dimensions[i][0];
            int b= dimensions[i][1]*dimensions[i][1];
            dong=a+b;
            cout<<dong<<" ";
            if(dong>ldong){
            area=dimensions[i][0]*dimensions[i][1];
            ldong=dong;
            }
            else if(dong==ldong){
            area=max(area,dimensions[i][0]*dimensions[i][1]);
            ldong=dong;
            }
        }
        return area;
    }
};