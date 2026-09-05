class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> arr;
        int i , n, min;
        n = nums.size();
        map <int,int> mpp;
        min = (n/3)+1;
        for(i=0; i<n; i++)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]]==min) // nums[i]>=min can add same no. twice
            {
                arr.push_back(nums[i]);
            }
        }
        return arr;  
    }
};
