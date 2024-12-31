class Solution
{
    public:
        int countGoodRectangles(vector<vector < int>> &rectangles)
        {
            //1st Approach
            // vector <int> arr;

            // for(auto it:rectangles)
            // {
            //     int minimum = min(it[0],it[1]);
            //     arr.push_back(minimum);
            // }

            // int highest = *max_element(arr.begin(),arr.end());
            
            // int maxLen=0;

            // for(auto it:arr)
            // {
            //     if(it>=highest) maxLen++;
            // }

            //2nd Approach
            int highest=0;
            int maxLen=0;

            for(auto &it:rectangles)
            {
                int minimum = min(it[0],it[1]);

                if(minimum>highest)
                {
                    highest=minimum;
                    maxLen=1;
                }
                else if(minimum==highest)
                {
                    maxLen++;
                }
            }

            return maxLen;
        }
};