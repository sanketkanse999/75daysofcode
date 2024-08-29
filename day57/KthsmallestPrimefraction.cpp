#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n = arr.size();
        vector<pair<float, pair<int, int>>> fractions;

        // Generate all possible fractions
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                float fraction = float(arr[i]) / float(arr[j]);
                fractions.push_back({fraction, {arr[i], arr[j]}});
            }
        }

        // Sort fractions in ascending order
        sort(fractions.begin(), fractions.end());

        // Return the k-th smallest fraction
        return {fractions[k-1].second.first, fractions[k-1].second.second};
    }
};
