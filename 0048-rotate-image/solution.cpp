class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n,i,j;
        // diagonals same , swap baaki elements , 01 = 10
        // isse 1st row transposed to 1st column then will reverse rows

        n = matrix.size();
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(i=0; i<n; i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }

        
    }
};
