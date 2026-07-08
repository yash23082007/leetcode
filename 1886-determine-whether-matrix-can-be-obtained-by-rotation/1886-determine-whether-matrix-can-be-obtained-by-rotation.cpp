// class Solution {
// public:
//     bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
//         int n=mat.size();
//         int m=mat[0].size();

        
//     }
// };
class Solution {
public:
    // Rotate matrix 90 degrees clockwise
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size();

        // Step 1: Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }

        // Step 2: Reverse each row
        for (int i = 0; i < n; i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        // Check all four possible rotations
        for (int i = 0; i < 4; i++) {
            if (mat == target)
                return true;

            rotate(mat);
        }

        return false;
    }
};