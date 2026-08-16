#include <iostream>

using namespace std;

int main() {
    long long x;
    cin >> x;
    
    long long total = (x * (x + 5)) / 2;
    
    cout << total << "\n";
    return 0;
}