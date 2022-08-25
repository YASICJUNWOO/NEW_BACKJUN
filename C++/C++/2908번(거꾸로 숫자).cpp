#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main() {
	
	/*원래 문자열 first, second와
	앞뒤 바꾼 문자열 first1, second1*/
	string first;
	string first1;
	string second;
	string second1;

	cin >> first;
	cin >> second;

	//입력받은 원래 세자리 숫자를 앞뒤 바꿔서 저장//
	for (int i = 2;i >= 0;i--) {
		first1 += first[i];
		second1 += second[i];
	}

	//문자열을 숫자로 바꿔준다
	int i = stoi(first1);
	int m = stoi(second1);

	//바꿔준 수를 비교하고 큰수를 출력한다
	if (i > m) {
		cout << i;
	}

	else if (i < m) {
		cout << m;
	}


	}
