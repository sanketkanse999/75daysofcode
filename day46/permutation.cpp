#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

class Solution {
private:
    void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
        // base case
        if (index >= nums.size()) {
            ans.push_back(nums);
            return;
        }

        for (int j = index; j < nums.size(); j++) {
            swap(nums[index], nums[j]);
            solve(nums, ans, index + 1);
            // backtracking
            swap(nums[index], nums[j]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = sol.permute(nums);

    // Print all permutations
    for (const auto& perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

