/**
 * Problem link - https://leetcode.com/problems/two-sum/
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i + 1;
        }
        for (int i = 0; i < nums.size(); i++) {
            int t = target - nums[i];
            if (mp[t] != 0 and mp[t] != i + 1) return {mp[t] - 1, i};
        }
        return {-1, -1};
    }
};