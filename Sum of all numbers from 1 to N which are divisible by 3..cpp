#include <iostream>
using namespace std;

int main() {

    // Sum of all numbers from 1 to N which are divisible by 3. 

    int N; 
    cout << "Enter a positive integer N: ";
    cin >> N;

    int sum = 0;

    for (int i = 1; i <= N; i++) { 
        if (i % 3 == 0) {
            sum += i;
        }
    }

    cout << "Sum of all numbers from 1 to " << N << " which are divisible by 3 is: " << sum << endl;

    return 0;
}
