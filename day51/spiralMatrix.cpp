#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;
        int top = rStart - 1;
        int bottom = rStart + 1;
        int right = cStart + 1;
        int left = cStart - 1;
        int i = rStart;
        int j = cStart;

        while (ans.size() < (rows * cols)) {
            // Move Right
            while (j < right) {
                if (j >= 0 && j < cols && i >= 0 && i < rows) {
                    ans.push_back({i, j});
                }
                j++;
            }
            right++;

            // Move Down
            while (i < bottom) {
                if (j >= 0 && j < cols && i >= 0 && i < rows) {
                    ans.push_back({i, j});
                }
                i++;
            }
            bottom++;

            // Move Left
            while (j > left) {
                if (j >= 0 && j < cols && i >= 0 && i < rows) {
                    ans.push_back({i, j});
                }
                j--;
            }
            left--;

            // Move Up
            while (i > top) {
                if (j >= 0 && j < cols && i >= 0 && i < rows) {
                    ans.push_back({i, j});
                }
                i--;
            }
            top--;
        }
        
        return ans;
    }
};

int main() {
    Solution sol;
    int rows = 5;
    int cols = 6;
    int rStart = 1;
    int cStart = 4;
    
    vector<vector<int>> result = sol.spiralMatrixIII(rows, cols, rStart, cStart);
    
    for (const auto& v : result) {
        cout << "[" << v[0] << ", " << v[1] << "] ";
    }
    cout << endl;
    
    return 0;
}
