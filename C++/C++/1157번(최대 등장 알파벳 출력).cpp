#include <iostream>
#include <string.h>
using namespace std;

int main() {
	//문자열, 알파벳 배열
	string dan;
	int al[26] = { 0, };

	cin >> dan;

	//알파벳 나온횟수 소문자, 대문자 구분없이 al배열에 저장
	for (int i = 0;i < dan.length();i++) {
		if (dan[i] >= 65 && dan[i] <= 90) {
			al[dan[i] - 65]++;
		}
		else if (dan[i] >= 97 && dan[i] <= 122) {
			al[dan[i] - 97]++;
		}
	}

	int max = 0; //최대 횟수
	int  m = 0;  //최대 횟수 나온 배열 순서값 저장
	int cnt = 0;  // 중복 판별 변수


	for (int i = 0;i < 26;i++) {
		if (max > al[i]) {
			continue;
		}
		//max 값이 al 배열 순회하면서 최대값을 받는다
		//최대값이 하나일 경우를 대비해 m값으로 최대값인 배열 순서를 미리 받아놓는다
		else if (max < al[i]) {
			max = al[i];
			m = i;
		}
	}

	//최대값이 다시 배열을 순회하면서 중복값이 있으면 cnt을 증가시킨다
	for (int i = 0;i < 26;i++) {
		if (al[i] == max) {
			cnt = cnt + 1;
		}
	}

	//cnt가 1이면 중복이 없다는 뜻이고 그 이상이면 최대값이 중복이라는 뜻이다.
	if (cnt > 1) {
		cout << "?";
	}

	//대문자 아스키 코드값을 출력하기 위해 순서값에 65를 더해서 출력해준다
	else if (cnt == 1) {
		cout << (char)(m + 65);
	}
	
}