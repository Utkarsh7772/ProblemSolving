class Solution {
public:
    int beautySum(string s) {
         int n = s.length();
    int totalBeauty = 0;

    for (int i = 0; i < n; i++) {
        vector<int> charCount(26, 0);
        for (int j = i; j < n; j++) {
            charCount[s[j] - 'a']++;
            int maxCount = 0, minCount = n;
            for (int k = 0; k < 26; k++) {
                if (charCount[k] > 0) {
                    maxCount = max(maxCount, charCount[k]);
                    minCount = min(minCount, charCount[k]);
                }
            }
            totalBeauty += (maxCount - minCount);
        }
    }

    return totalBeauty;

    }
};