#include <iostream>
using namespace std;

int main() {
    int n;      //3
    int star = 1;
    int u;
    cin >> n;
    u = n;
    for (int i = 1;i <= n;i++) {

        for (int k = u - 1;k > 0;k--) {
            cout << " ";
        }

        for (int k = 0;k < star;k++) {
            cout << "*";
        }

        for (int k = u - 1;k > 0;k--) {
            cout << " ";
        }
        u--;
        if (i < n) {
            cout << endl;
        }
        star = star + 2;//3

    }

}