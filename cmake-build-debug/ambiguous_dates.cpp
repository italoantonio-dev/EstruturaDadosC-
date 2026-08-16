#include <iostream>

using namespace std;

int main() {
    int d, m;
    cin >> d >> m;
    
    if (d <= 12 && m <= 12 && d != m) {
        cout << "DATA INCERTA\n";
    } else {
        cout << "DATA SEGURA\n";
    }
    
    return 0;
}