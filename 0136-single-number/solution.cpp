class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,j,c,num,x;
        int n = nums.size();
        x=0;
        
       /* for(i=0;i<n;i++)
        {
            c=0;
            for(j=0;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                    c++;
                }
            }
            if(c==1)
            {
                num = nums[i];
                break;
            }
        }*/

        for(i=0;i<n;i++)
        {
            x = x ^ nums[i];
        }
        return x;
        
    }
};
