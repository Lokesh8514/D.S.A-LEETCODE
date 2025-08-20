class Solution {
public:
    bool binarysearch(vector<int>& arr, int target) {
        int s = 0;
        int e = arr.size() - 1;
        while (s <= e) {
            int MID = s + (e - s) / 2;
            if (arr[MID] == target)
                return true;
            else if (arr[MID] < target)
                s = MID + 1;
            else
                e = MID - 1;   
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();

        int s = 0, e = r - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;

            // check if target is in this row range
            if (matrix[mid][0] <= target && target <= matrix[mid][c - 1]) {
                return binarysearch(matrix[mid], target);  //  search only inside if in range
            }
            else if (target < matrix[mid][0]) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        return false;
    }
};
