class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); // row size
        int n = matrix[0].size(); // col size
        int low = 0, high = m-1; 
        
        int i = 0; // store the row of target
        while(low <= high){
            int mid = low + (high -low)/2;
            if(matrix[mid][0] == target)
                    return true;
            else if(matrix[mid][0] > target){
                high = mid - 1;
            }
            else{
                i = mid;
                low = mid + 1;
            }
        } 
        low = 0, high = n-1;
        
        while(low <= high){
            int mid = low + (high -low)/2;
            if(matrix[i][mid] == target)
                    return true;
            else if(matrix[i][mid] > target){
                high = mid - 1;
            }
            else{ 
                low = mid + 1;
            }
        } 
        return false;
    }
};