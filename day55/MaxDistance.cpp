#include <iostream>
#include <vector>
#include <climits> 
#include <algorithm> 

using namespace std;

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n = arrays.size();
        int minn = arrays.front().front();
        int maxx = arrays[0].back();
        int max_distance = INT_MIN;

        for (int i = 1; i < n; i++) {
            max_distance = max(max_distance, max(abs(arrays[i].back() - minn), abs(arrays[i].front() - maxx)));
            minn = min(minn, arrays[i].front());
            maxx = max(maxx, arrays[i].back());
        }

        return max_distance;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> arrays = {{1, 2, 3}, {4, 5}, {1, 2, 3}};
    cout << sol.maxDistance(arrays) << endl;
    return 0;
}
