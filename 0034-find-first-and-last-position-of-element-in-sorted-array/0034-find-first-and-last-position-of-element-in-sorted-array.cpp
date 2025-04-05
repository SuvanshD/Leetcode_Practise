class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;

        auto lb = lower_bound(nums.begin(), nums.end(), target);
        auto ub = upper_bound(nums.begin(), nums.end(), target);

        // Check if target is actually in the array
        if (lb != nums.end() && *lb == target) {
            first = lb - nums.begin(); // iterator to index
            last = ub - nums.begin() - 1; // upper_bound gives index just after last occurrence
        }

        return {first, last};
    }
};
