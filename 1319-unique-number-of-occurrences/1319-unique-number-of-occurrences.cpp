class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map <int,int> mpp;
        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        unordered_map <int,int> mpp2;
        for (auto x : mpp)
        {
            mpp2[x.second]++;
        }

        for (auto x : mpp2)
        {
            if (x.second > 1)
            {
                return false;
            }
        }

        return true;
    
    }
};