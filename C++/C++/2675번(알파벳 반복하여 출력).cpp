#include <iostream>
#include <string.h>
using namespace std;

int main() {

	//테스트 케이스 t,케이스마다 반복된 문자열을 담을 문자열배열 total
	int t;
	string total[20];

	cin >> t;

	//t회 반복
	for (int n = 0;n < t;n++) {

		//문자 반복횟수 r, 문자열al
		int r = 0;
		string al;


		cin >> r;
		cin >> al;

		//문자열 길이만큼 반복하여 r회 반복하여 total에 저장한다
		for (int y = 0;y < al.length();y++) {
			for (int i = 0;i < r;i++) {
				total[n] = total[n] + al[y];
			}
		}
	}

	for (int n = 0;n < t-1;n++) {
		cout << total[n] << endl;
	}
	cout << total[t-1];
}
