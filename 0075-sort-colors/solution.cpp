class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j,n,temp;
        n= nums.size();

        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(nums[j]>nums[j+1])
                {
                   temp = nums[j];
                   nums[j] = nums[j+1];
                   nums[j+1] = temp;
                }
            

            }
            
            
        }
        
    }
};
