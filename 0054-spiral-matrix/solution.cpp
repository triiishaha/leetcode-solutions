class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //right - bottom - left - top = spiral motion
        int i,n,m;
        n = matrix.size() ;
        m = matrix[0].size(); //column size
        int top = 0;
        int bot = n-1;
        int right = m-1;
        int left = 0;
        vector <int> ans;

        while(top<=bot && left<=right)
        {
            for(i=left; i<=right; i++)
            {
               ans.push_back(matrix[top][i]);
            //first row
            }
            top++;
            for(i=top; i<= bot; i++)
            {
               ans.push_back(matrix[i][right]);
            //lastcolumn
            }
            right--;
            if(top<=bot )
            {
                for(i=right; i>=left ; i--)
                {
                   ans.push_back(matrix[bot][i]);
            //bottom row
                }
                bot--;
            }
            if(left<=right)
            {
                for(i=bot; i>=top ; i--)
                {
                   ans.push_back(matrix[i][left]);
                }
                left++;

            }  

        }
        return ans;
    }
};
