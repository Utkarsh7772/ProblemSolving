class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        int begin = 1, last = 1, n = nums.size();
        for(int i=0;i<n;i++)
        {
            ans[i] *= begin;
            begin *= nums[i];

            ans[n-i-1] *= last;
            last *= nums[n-i-1];
        }
        return ans;    
    }
};