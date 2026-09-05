class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i,j;
        vector<vector<int>> res;
       

        for(i=1;i<=numRows;i++)
        {
            vector<int> ansRows;
            ansRows.push_back(1);
            long long ans = 1;
            for(j=1; j<i;j++)
            {
                ans = ans * (i-j);
                ans = ans / j;
                ansRows.push_back(ans);
            }
            res.push_back(ansRows);

        }
        return res;
        
    }
};
