class Solution {
public:
    int getLucky(string s, int k) {
        int curr=0;
        for (char ch : s) {
            int pos= ch-'a'+1;
            while (pos>0) {
                curr+= pos%10;
                pos/=10;
            }
        }
        for (int i = 1; i < k; ++i) {
            int digitSum = 0;
            while (curr>0) {
                digitSum+=curr%10;
                curr/=10;
            }
            curr=digitSum;
        }
        return curr;
    }
};