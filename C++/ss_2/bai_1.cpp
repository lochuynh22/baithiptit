#include <iostream>
#include <vector>
using namespace std;

int minMergeToPalindrome(vector<int>& A) {
    int n = A.size();
    int left = 0, right = n - 1;
    int merges = 0;

    while (left < right) {
        if (A[left] == A[right]) {
            left++;
            right--;
        } else if (A[left] < A[right]) {
            A[left + 1] += A[left];
            left++;
            merges++;
        } else {
            A[right - 1] += A[right];
            right--;
            merges++;
        }
    }
    return merges;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> A(n);

        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        int result = minMergeToPalindrome(A);
        cout << result << endl;
    }

    return 0;
}
