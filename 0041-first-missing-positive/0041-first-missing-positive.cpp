class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int n= nums.size();

        vector <bool> check(n,false);

        for(int i=0;i<n;i++)
        {
            if(nums[i]>0 && nums[i]<=n)
            {
                check[nums[i]-1]=true;
            }
        }

        for(int i=1;i<=n;i++)
        {
            if(check[i-1]==false)
            {
                return i;
            }
        }
    
        return n+1;
    }
};