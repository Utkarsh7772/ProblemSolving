class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long res=0;
        for(int i=0;i<nums.size();i++){
            res=res^nums[i];
        }
        int mask=res&(-1*res);
        int first=0;
        for(int i=0;i<nums.size();i++){
            if((mask&nums[i])!=0){
                first=first^nums[i];
            }
        }
        int second=res^first;
        return {first,second};
    }
}; 