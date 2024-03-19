class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
         unordered_map<char, int> freq;
    int maxFreq = 0;
    for (char task : tasks) {
      freq[task]++;
      maxFreq = max(maxFreq, freq[task]);
    }
    int totalCycle = (maxFreq - 1) * (n + 1);
    for (auto &f : freq) {
      if (f.second == maxFreq) {
        totalCycle++;
      }
    }
    return max(totalCycle, (int)tasks.size());
    }
};