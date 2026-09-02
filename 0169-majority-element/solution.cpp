class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,n,c,max;
        max=0;
        n = nums.size();

        for(i=0; i<n; i++)
        {
            if(c==0)
            {
                max = nums[i];
            }
            if(nums[i]==max)
            {
                c++;
            }
            else
            {
                c--;
            }
            
// max no is more than half times the lenght to same no +1 and diff no. -1 , so it cannot be cancelled pura the max no so this works with less tc
            
        }
       return max; 
    }
};
