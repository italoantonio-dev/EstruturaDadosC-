#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    reverse(s.begin(), s.end());
    cout << s << "\n";
    return 0;
}