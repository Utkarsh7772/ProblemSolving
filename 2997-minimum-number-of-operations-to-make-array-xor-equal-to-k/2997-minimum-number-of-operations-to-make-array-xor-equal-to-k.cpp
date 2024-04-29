class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int a = nums[0] ;
        for (int i = 1 ; i < nums.size() ; i++){
            a = a^nums[i] ;
        }

        bitset<32> bt1(k) ;
        bitset<32> bt2(a) ;

        string str1 = bt1.to_string() ;
        string str2 = bt2.to_string() ;

        int count = 0 ;

        for (int i = 0 ; i < str1.size() ; i++){
            if (str1[i] != str2[i]){
                count++ ;
            }
        }

        return count ;
    }
};