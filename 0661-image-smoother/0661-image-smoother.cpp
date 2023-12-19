#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
  int m = img.size();
  int n = img[0].size();
  vector<vector<int>> new_img(m, vector<int>(n));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      int total = 0;
      int count = 0;
      for (int x = i - 1; x <= i + 1; x++) {
        for (int y = j - 1; y <= j + 1; y++) {
          if (x >= 0 && x < m && y >= 0 && y < n) {
            total += img[x][y];
            count++;
          }
        }
      }
      int avg = static_cast<int>(total / static_cast<double>(count));
      new_img[i][j] = avg;
    }
  }
  return new_img;
}
};