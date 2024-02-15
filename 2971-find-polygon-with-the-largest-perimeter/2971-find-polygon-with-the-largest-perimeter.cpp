class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long slow=0;
        long long res=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<slow)
                res=slow+nums[i];
                slow=slow+nums[i];
        }
        return res;
    }
};