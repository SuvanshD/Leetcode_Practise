class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector <bool> check (n+1,false);

        for(int i=0;i<n;i++)
        {
            check[nums[i]]=true;
        }

        for(int i=0;i<n+1;i++)
        {
            if(!check[i]) return i;
        }

        return n;

        
    }
};