class Solution {
public:
    int findComplement(int num) {
        string str = "";
        while (num != 0) {
            str += ((num % 2) + '0');  
            num /= 2;  
        }
        
        reverse(str.begin(), str.end());

        string str1 = "";
        for (char ch : str) {
            if (ch == '0')
                str1 += '1';  
            else
                str1 += '0';  
        }

        int ans = 0;
        long long pow = 1; 

        for (int i = str1.size() - 1; i >= 0; i--) {
            ans += ((str1[i] - '0') * pow);  
            if (pow > INT_MAX / 2) break;  
            pow *= 2;  
        }

        return ans;
    }
};