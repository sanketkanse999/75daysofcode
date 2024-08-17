#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> mp = {{')', '('},
                                        {']', '['},
                                        {'}', '{'}};
        for(char c : s) {
            if(mp.find(c) == mp.end()) {
                stack.push(c);
            } else if(!stack.empty() && mp[c] == stack.top()) {
                stack.pop();
            } else {
                return false;
            }
        }
        return stack.empty();
    }
};

int main() {
    Solution sol;
    string test = "{[()]}";
    cout << (sol.isValid(test) ? "Valid" : "Invalid") << endl;
    return 0;
}
