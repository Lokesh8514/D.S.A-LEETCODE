class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double area = 0;
        double maxarea = INT_MIN;
        int n = points.size();
        for (int i = 0; i < n - 2; i++) {
            double x1 = points[i][0];
            double y1 = points[i][1];
            for (int j = i + 1; j < n - 1; j++) {
                double x2 = points[j][0];
                double y2 = points[j][1];
                for (int k = j + 1; k < n; k++) {
                    double x3 = points[k][0];
                    double y3 = points[k][1];
                    area = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
                    maxarea=max(maxarea,area);
                }
            }
        }
        return maxarea;
    }
};