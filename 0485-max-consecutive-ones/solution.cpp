class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int i,c,c1;
        int n = nums.size();
        c=0;
        c1=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                c++; 
            }
            else
            {
                if(c>c1)
                {
                    c1=c;
                }
                c=0;
            }
        }
        if(c>c1)
        {
            c1=c;
        }
        return c1;
    }
};
