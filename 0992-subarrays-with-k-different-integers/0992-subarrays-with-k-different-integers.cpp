class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int rst = 0;
        int cnt = 0;
        int l = 0, r = 0;
        unordered_map<int, int> freq;

        while (r < nums.size()) {
            freq[nums[r]]++;
            if (freq[nums[r]] == 1) {
                    cnt++;
            }

            if (cnt == k) {
                int lbound = l, rbound = r + 1;
                while (rbound < nums.size()) {
                    if (freq[nums[rbound]] == 0) {
                        break;
                    }
                    rbound++;
                }
                while (lbound <= r) {
                    freq[nums[lbound]]--;
                    if (freq[nums[lbound]] == 0) {
                        break;
                    }
                    lbound++;
                }
                rst += (lbound - l + 1) * (rbound - r);
                l = lbound + 1;
                cnt--;
            }

            r++;
        }

        return rst;
    }
};