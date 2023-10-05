class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         sort(nums.begin(), nums.end());
    int n = nums.size();
    int threshold = n / 3;
    int count = 1;
    vector<int> result;

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            count++;
        } else {
            if (count > threshold) {
                result.push_back(nums[i - 1]);
            }
            count = 1;
        }
    }

    if (count > threshold) {
        result.push_back(nums[n - 1]);
    }

    return result;
    }
};
   