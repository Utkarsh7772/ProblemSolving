class Solution {
public:
    int jump(vector<int>& nums) {
         int n = nums.size();
        int steps = 0;
        int end = 0;
        int maxReach = 0;

        for (int i = 0; i < n - 1; i++) {
            maxReach = max(maxReach, i + nums[i]);

            if (i == end) {
                end = maxReach;
                steps++;
            }
        }

        return steps;
    }
};