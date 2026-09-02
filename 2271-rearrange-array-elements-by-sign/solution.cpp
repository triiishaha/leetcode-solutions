class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int i,n,pos,neg;
        pos = 0;
        neg = 1;
        n = nums.size();
        vector<int> ans(n);

        for(i=0; i<n; i++)
        {
            if(nums[i]>0)
            {
                ans[pos] = nums[i];
                pos = pos + 2;
            }
            else if(nums[i]<0)
            {
                ans[neg] = nums[i];
                neg = neg + 2;
            }
        }
        return ans;
    }
};
