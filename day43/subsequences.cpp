#include <bits/stdc++.h>
using namespace std;

void solve(string str, string output, int index, vector<string>& ans) {
    // base case
    if (index >= str.length()) {
        if (output.length() > 0) {
            ans.push_back(output);
        }
        return;
    }

    // exclude the current character
    solve(str, output, index + 1, ans);

    // include the current character
    char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}

vector<string> subsequences(string str) {
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}

int main() {
    string str = "abc";
    vector<string> result = subsequences(str);

    // Print the result
    cout << "Subsequences:" << endl;
    for (const auto& subseq : result) {
        cout << subseq << endl;
    }

    return 0;
}
