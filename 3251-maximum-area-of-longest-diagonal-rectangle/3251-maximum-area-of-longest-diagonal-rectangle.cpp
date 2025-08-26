class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double max_diagonal = -1.0;   
        int max_area = -1;

        for (auto& rect : dimensions) {
            int l = rect[0], w = rect[1];
            double diagonal = sqrt(1.0 * l * l + 1.0 * w * w);
            int area = l * w;

            if (diagonal > max_diagonal) {
                max_diagonal = diagonal;
                max_area = area;
            } else if (diagonal == max_diagonal) {
                // diagonals equal  
                max_area = max(max_area, area);
            }
        }

        return max_area;
    }
};
// class Solution {
// public:
//     int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
//         int m=dimensions.size();
//         int ldong=INT_MIN;
//         int dong=INT_MIN;
//         int area=0;
//         for(int i=0;i<m;i++){
//             int a = dimensions[i][0]*dimensions[i][0];
//             int b= dimensions[i][1]*dimensions[i][1];
//             dong=a+b;
//             cout<<dong<<" ";
//             if(dong>ldong){
//             area=dimensions[i][0]*dimensions[i][1];
//             ldong=dong;
//             }
//             else if(dong==ldong){
//             area=max(area,dimensions[i][0]*dimensions[i][1]);
//             ldong=dong;
//             }
//         }
//         return area;
//     }
// };