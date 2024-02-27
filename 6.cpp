#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 100) {
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            int value = i + j;
            if (value > n) {
                value -= n;
            }
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}
