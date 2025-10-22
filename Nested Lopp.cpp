#include <iostream>
using namespace std;

int main () {

    int n = 10;                        // Outer loop

for (int i = 1; i <= n; i++) {
    int m = 10;                        // Inner loop
    for (int i = 1; i <= m; i++) {
        cout << "*";
    }

    cout << endl;   
}

    return 0;
}
