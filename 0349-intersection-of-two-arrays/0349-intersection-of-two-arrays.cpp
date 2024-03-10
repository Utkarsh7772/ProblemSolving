class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> elements;
        vector<int> answer;
        for (int num : nums1) {
            elements.insert(num);
        }
        for (int num : nums2) {
             if (elements.count(num)) {
                 answer.push_back(num);
                 elements.erase(num);
             }
        }
        return answer;
    }
};