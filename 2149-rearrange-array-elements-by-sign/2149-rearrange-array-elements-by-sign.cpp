class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1,v2,res;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                v1.push_back(nums[i]);
            else
                v2.push_back(nums[i]);
        }
        
        for(int i=0;i<nums.size()/2;i++)
        {
            res.push_back(v1[i]);
            res.push_back(v2[i]);
        }
        return res;
    }
};