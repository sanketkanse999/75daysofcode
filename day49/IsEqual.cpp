#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != target[i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;

    // Example usage:
    vector<int> target = {1, 2, 3, 4};
    vector<int> arr = {2, 4, 1, 3};

    bool result = solution.canBeEqual(target, arr);
    if (result) {
        cout << "The arrays can be made equal." << endl;
    } else {
        cout << "The arrays cannot be made equal." << endl;
    }

    return 0;
}

