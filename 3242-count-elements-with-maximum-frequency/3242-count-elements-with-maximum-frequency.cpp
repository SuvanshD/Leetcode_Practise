class Solution {
public:
    // int maxFrequencyElements(vector<int>& nums) {
        
    //     int highest=0;
    //     int total=0;

    //     unordered_map <int,int> mpp;

    //     for(int i=0;i<nums.size();i++)
    //     {
    //         mpp[nums[i]]++;
    //         if(mpp[nums[i]]>highest) highest = mpp[nums[i]];
    //     }

    //     for(auto x:mpp)
    //     {
    //         if(x.second==highest)
    //         {
    //             total+=highest;
    //         }
    //     }

    //     return total;
    // }
    int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int, int> frequencyMap;
    int highestFrequency = 0, total = 0;

    // Count frequencies and determine the highest frequency in one pass
    for (int num : nums) {
        int freq = ++frequencyMap[num];
        if (freq > highestFrequency) {
            highestFrequency = freq;
            total = freq; // Reset total as a new highest frequency is found
        } else if (freq == highestFrequency) {
            total += freq; // Add to total if another element matches highest frequency
        }
    }

    return total;
}

};