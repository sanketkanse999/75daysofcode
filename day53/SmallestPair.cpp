#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int low = 0, high = nums[n - 1] - nums[0];

        auto count_pairs = [&](int max_distance) {
            int count = 0, j = 0;
            for (int i = 0; i < n; ++i) {
                while (j < n && nums[j] - nums[i] <= max_distance) ++j;
                count += j - i - 1;
            }
            return count;
        };

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (count_pairs(mid) < k) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 1};
    int k = 3;
    cout << sol.smallestDistancePair(nums, k) << endl;
    return 0;
}
