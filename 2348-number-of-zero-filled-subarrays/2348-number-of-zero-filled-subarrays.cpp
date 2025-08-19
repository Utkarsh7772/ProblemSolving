class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long len=0;
        long long ans=0;
        for(int x: nums){
            if(x==0){
                len=len+1;
                ans=ans+len;
            }
            else
            len = 0;
        }
        return ans;
    }
};