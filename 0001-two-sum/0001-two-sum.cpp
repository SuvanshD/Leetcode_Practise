class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> final;

        map <int,int> mpp;

        for(int i=0;i<nums.size();i++)
        {
            int a = nums[i];
            int more = target - a;
            if(mpp.find(more) != mpp.end())
            {
                return {i,mpp[more]};
            }
            mpp[a] = i;
        }
        
        return final;
    }
};