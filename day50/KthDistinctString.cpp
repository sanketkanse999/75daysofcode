#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n = arr.size();
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (mp[arr[i]] == 1) {
                k--;
            }
            if (k == 0) {
                return arr[i];
            }
        }
        return "";
    }
};

int main() {
    Solution solution;
    vector<string> arr = {"a", "b", "a", "c", "b", "d"};
    int k = 2;
    cout << solution.kthDistinct(arr, k) << endl;
    return 0;
}
