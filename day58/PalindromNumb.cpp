#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long y = 0;
        if (x < 0) {
            return false;
        }
        long c = x;
        while (c != 0) {
            y = y * 10;
            y = (c % 10) + y;
            c = c / 10;
        }
        return y == x;
    }
};

int main() {
    Solution sol;
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if(sol.isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}
