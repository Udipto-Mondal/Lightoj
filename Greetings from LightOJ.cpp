#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int a, b;
        cin >> a >> b;
        int s = a + b;
        cout << "case " << i << ":" << s << endl;
    }

    return 0;
}
