class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int i,n;
        vector<vector<int>> ans;
        n = intervals.size();
        sort(intervals.begin(),intervals.end());
        for(i=0;i<n;i++)
        {
            if(ans.empty() || intervals[i][0] > ans.back()[1])
            {
                ans.push_back(intervals[i]);
            }
            else
            {
                ans.back()[1] = max(ans.back()[1],intervals[i][1]);
            }

        }
        return ans;
    }
};
