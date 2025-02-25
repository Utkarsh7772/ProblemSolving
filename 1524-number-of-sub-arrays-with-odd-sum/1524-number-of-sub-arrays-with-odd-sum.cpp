class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        int odd_count = 0, even_count = 1; // Start with even_count = 1 for prefix sum = 0
        int prefix_sum = 0;
        int result = 0;

        for (int num : arr) {
            // Update prefix sum
            prefix_sum += num;

            // Check if current prefix sum is odd or even
            if (prefix_sum % 2 == 0) {
                // If even, add odd_count to result
                result = (result + odd_count) % MOD;
                even_count++;
            } else {
                // If odd, add even_count to result
                result = (result + even_count) % MOD;
                odd_count++;
            }
        }

        return result;
    }
};
