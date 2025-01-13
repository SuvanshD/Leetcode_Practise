class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        int highest=0;
        int total=0;

        unordered_map <int,int> mpp;

        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]]>highest) highest = mpp[nums[i]];
        }

        for(auto x:mpp)
        {
            if(x.second==highest)
            {
                total+=highest;
            }
        }

        return total;
    }
};