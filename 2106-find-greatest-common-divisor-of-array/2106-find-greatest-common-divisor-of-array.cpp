class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small = *min_element(nums.begin(),nums.end());
        int large = *max_element(nums.begin(),nums.end());

        while(small>0 && large>0)
        {
            if(small>large) small=small%large;
            else large=large%small;
        }
        if(small==0) return large;
        return small;
    }
};