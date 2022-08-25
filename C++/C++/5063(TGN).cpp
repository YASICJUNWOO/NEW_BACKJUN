#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 0;i < n;i++) {
		int r, e, c;

		cin >> r>>e>>c;

		int adprice = e - c;  //광고를 했을 때 손익

			if (r > adprice) {
				cout << "do not advertise\n";
			}
			else if (r < adprice) {
				cout << "advertise\n";
			}
			else cout << "does not matter\n";
		
	}
}