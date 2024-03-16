class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int max_len=0;
        int c=0;
        unordered_map<int,int>c_map;
        c_map[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            c+=(nums[i]==0)?-1:1;
            if(c_map.count(c))
            {
                max_len=max(max_len,i-c_map[c]);
            }
            else
            {
                c_map[c]=i;
            }
        }
        return max_len;
    }
};