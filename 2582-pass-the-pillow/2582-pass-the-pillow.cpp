class Solution {
public:
    int passThePillow(int n, int time) {
        int num = time / (n-1);
        int mod = time % (n-1);
        if (num%2==0) {
            return 1 + mod;
        }
        return n - mod;
    }
};