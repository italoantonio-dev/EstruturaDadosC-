#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0, candidate = 0;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    cout << candidate << "\n";
    return 0;
}