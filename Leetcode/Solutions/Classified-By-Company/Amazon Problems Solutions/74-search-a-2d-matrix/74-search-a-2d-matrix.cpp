class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0 ; i < matrix.size() ; ++i)
        {
            bool fnd  = binary_search(matrix[i].begin() , matrix[i].end() , target);
            if(fnd)
                return true;
        }
        return false;
    }
};