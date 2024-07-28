#include <iostream>
#include <vector>

using namespace std;

// Function to determine if two numbers have different parities
bool hasDifferentParity(int a, int b) {
    return (a % 2) != (b % 2);
}

// Function to count 'Zamn' triplets
int countZamnTriplets(const vector<int>& A) {
    int N = A.size();
    int count = 0;

    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            if (hasDifferentParity(A[i], A[j])) {
                for (int k = j + 1; k < N; ++k) {
                    if (hasDifferentParity(A[j], A[k])) {
                        ++count;
                    }
                }
            }
        }
    }

    return count;
}

int main() {
    // Example usage
    int T = 2; // Number of test cases
    
    vector<vector<int>> testCases = {
        {2, 2, 5, 4, 6},
        {1, 1, 1}
    };
    
    vector<int> expectedOutputs = {4, 0};

    for (int t = 0; t < T; ++t) {
        vector<int>& A = testCases[t];
        cout << "Test case " << t + 1 << ": Array = ";
        for (int num : A) {
            cout << num << " ";
        }
        cout << endl;

        int result = countZamnTriplets(A);
        cout << "Number of 'Zamn' triplets: " << result << endl;
        cout << "Expected output: " << expectedOutputs[t] << endl;
        cout << "---------------------------------------" << endl;
    }

    return 0;
}

