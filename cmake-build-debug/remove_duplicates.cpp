#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) return 0;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    int k = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }

    cout << k << "\n";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << (i == k - 1 ? "" : " ");
    }
    cout << "\n";
    return 0;
}