class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());

        int n=1;

        for(auto it:nums)
        {
            if(it==n)
            {
                n++;
            }
            else if(it>n)
            {
                break;
            }
        }

        return n;
    
        
    }
};