class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {

        int i,n;
        n=nums.size();
        for(i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums.erase(nums.begin() + i);
                i--;
                n--;  
            }
        }

        cout<<"[";
        for(i=0;i<n;i++)
        {
        
            cout<< nums[i];
            if(i != n - 1)
                cout << ",";
        }
        cout<<"]";
       

       return n; 
    }
};
