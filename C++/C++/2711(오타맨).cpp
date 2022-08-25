#include <iostream>
#include <string>
using namespace std;

int main() {

	//테스트 케이스 입력받기
	int test;
	cin >> test;

	int wrong; //틀린 자리수
	string word; //단어

	for (int i = 0;i<test;i++) {

		cin >> wrong >> word;

		//단어의 길이만큼
		for (int t = 0;t<word.length();t++) {
			if (t == wrong - 1) continue;
			cout << word[t];
		}
		cout << '\n';
	}

}