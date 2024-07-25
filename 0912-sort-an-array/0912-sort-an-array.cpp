class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
         priority_queue<int,vector <int>,greater<int>> p;
         for(auto i:nums){
             p.push(i);
         }
         int i=0;
         while(!p.empty()){
            nums[i++]=p.top();
            p.pop();
         }
         return nums;
    }
};