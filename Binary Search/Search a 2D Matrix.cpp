//Solution 1

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < matrix[0].size() ; j++){
                if(matrix[i][j] == target){return true;}
            }
        }
        return false;
    }
};

//Solution 2

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0 ;
        int high = (matrix.size() * matrix[0].size()) - 1;
        while(low <= high){
            int mid = (high + low) / 2 ;
            int row = mid / matrix[0].size();
            int col = mid % matrix[0].size();
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};
