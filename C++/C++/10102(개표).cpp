#include <iostream>
#include <string>
using namespace std;

int main() {

	int a=0, b=0;
	int v;

	string result;

	//심사위원 수와 투표결과 입력받기
	cin >> v >> result;

	//투표수 만큼 탐색하며 변수에 각각 저장
	for (int i = 0;i < result. length();i++) {
		if (result[i] == 'A') a++;
		else b++;
	}

	//조건문으로 출력
	if (a > b) cout << 'A';
	else if (a < b) cout << 'B';
	else cout << "Tie";
}