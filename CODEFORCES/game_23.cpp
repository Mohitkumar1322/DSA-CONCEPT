#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int moves = 0;
    while (m < n) {
        if (m % 2 == 0) {
            m /= 2;
            moves++;
        } else if (m % 3 == 0) {
            m /= 3;
            moves++;
        } else {
            cout << -1 << endl;
            return 0;
        }
    }

    if (m == n) {
        cout << moves << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
