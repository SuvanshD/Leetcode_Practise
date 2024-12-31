class Solution
{
    public:
        int countGoodRectangles(vector<vector < int>> &rectangles)
        {
            vector <int> arr;

            for(auto it:rectangles)
            {
                int minimum = min(it[0],it[1]);
                arr.push_back(minimum);
            }

            int highest = *max_element(arr.begin(),arr.end());
            
            int maxLen=0;

            for(auto it:arr)
            {
                if(it>=highest) maxLen++;
            }

            return maxLen;
        }
};