// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         int m=matrix[0].size();

//         vector<int>row(n,-1);
//         vector<int>col(m,-1);

//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==0){

//                 }
//             }
//         }
        
        
//     }
// };
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        // row[i] = 0 means make entire row i zero
        // col[j] = 0 means make entire column j zero
        vector<int> row(n, -1);
        vector<int> col(m, -1);

        // Step 1: Find all original zeros
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (matrix[i][j] == 0) {
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }

        // Step 2: Make marked rows and columns zero
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (row[i] == 0 || col[j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};