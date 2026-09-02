class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int i, n, sum, max;
        sum = 0;
        max = nums[0];
        n = nums.size();

        for(i=0; i<n; i++)
        {
            sum = sum + nums[i];
            if(sum > max)
            {
                max = sum;
            }
            if(sum<0)
            {
                sum = 0;
            }
        }
        return max;
        
        
    }
};
