class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            even.push_back(nums[i]);
            else 
            odd.push_back(nums[i]);
        }
        for(int num : odd)
        {
            even.push_back(num);
        }
        return even;
    }
};