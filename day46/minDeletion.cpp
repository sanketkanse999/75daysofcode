#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimumDeletions(string s) {
        int ans = 0, b = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'b') b++;
            else ans = min(ans + 1, b);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter the string: ";
    cin >> s;
    int result = sol.minimumDeletions(s);
    cout << "Minimum deletions: " << result << endl;
    return 0;
}
