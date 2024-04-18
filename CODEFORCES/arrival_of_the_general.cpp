#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> height(n);
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int min_hi = min_element(height.begin(), height.end()) - height.begin();
    int max_hi = max_element(height.begin(), height.end()) - height.begin();

    int swaps = max_hi + n - 1 - min_hi;
    if (max_hi > min_hi) {
        swaps--;
    } else if (max_hi == min_hi) {
        swaps = 0; // Soldiers are already correctly positioned
    }

    cout << swaps << endl;
    return 0;
}
