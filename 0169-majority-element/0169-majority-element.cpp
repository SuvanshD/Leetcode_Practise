class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        map <int,int> mpp;

        int half = (nums.size()-1)/2;

        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]]>half)
            {
                return nums[i];
            }
        }

        // for(const auto& pair:mpp)
        // {
        //     if(pair.second > half)
        //     {
        //         return pair.first;
        //     }
        // }
    return 0;
    }
};