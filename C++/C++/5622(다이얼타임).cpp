#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {

	int time=0; //걸리는 시간

	//문자열 입력받음
	string alpa;
	cin >> alpa;


	for (int i=0;i < alpa.length();i++) {

		int cnt = 3;

		//번호당 알파벳이 3개인 경우 (A~O)
		for (int y = 1;y < 14;y=y+3) {
			if (alpa[i]>=y+64 && alpa[i] <= y + 66) {
				time = time + cnt;
			}
			cnt++;
			}

		//번호당 알파벳이 4개인 경우(P~S)
		if (alpa[i] >= 80 && alpa[i] <= 83) {
			time = time + cnt;
		}
		cnt++;

		//번호당 알파벳이 3개인 경우 (T~V)
		if (alpa[i] >= 84 && alpa[i] <= 86) {
			time = time + cnt;
		}
		cnt++;

		//번호당 알파벳이 4개인 경우(W~Z)
		if (alpa[i] >= 87 && alpa[i] <= 90) {
			time = time + cnt;
		}
		cnt++;
		}

	cout << time;
	}
