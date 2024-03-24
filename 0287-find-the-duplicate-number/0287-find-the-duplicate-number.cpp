class Solution {
public:
    int findDuplicate(vector<int>& nums) {
          for(int i=0; i< nums.size(); i++){
            if(nums[i] == i+1) 
                continue;
            else if(nums[nums[i]-1] != nums[i]){
                int t =nums[nums[i] -1];
                nums[nums[i]-1] = nums[i];
                nums[i] = t;
                i--;
            }
        }
        int res = 0;
        for(int i=0; i< nums.size(); i++){
            if(nums[i] != i+1){
                res = nums[i];
                break;
            }
        }
        return res;
    }
};