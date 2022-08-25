#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	//알파벳 개수만큼의 배열생성
	int al[26];

	//알파벳 배열의 모든 값 -1로 설정
	for (int i = 0;i < 26;i++) {   
		 al[i] = -1;
	}

	cin >> s;

	
	for (int i = 0;i < s.length();i++) {
		int m = s[i] - 97;  //그 자리에서의 알파벳 아스키 코드

		//중복 피하기 위해 이전에 값이 바뀌지 않았을 때만 값을 바꾼다
		if (al[m] == -1) {
			al[m] = i;
		}
	}

	for (int i = 0;i<26;i++) {
		cout << al[i] << " ";
	}
}