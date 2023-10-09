class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>pos={-1,-1};
        int n=nums.size();
        int l=0;
        int h=n-1;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (nums[mid] == target) {
                pos[0] = mid;
                h = mid - 1; 
            } else if (target < nums[mid]) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        l = 0;
        h = n - 1;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (nums[mid] == target) {
                pos[1] = mid;
                l = mid + 1; 
            } else if (target < nums[mid]) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return pos;
    }
};