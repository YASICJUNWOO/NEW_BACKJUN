#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	//���ĺ� ������ŭ�� �迭����
	int al[26];

	//���ĺ� �迭�� ��� �� -1�� ����
	for (int i = 0;i < 26;i++) {   
		 al[i] = -1;
	}

	cin >> s;

	
	for (int i = 0;i < s.length();i++) {
		int m = s[i] - 97;  //�� �ڸ������� ���ĺ� �ƽ�Ű �ڵ�

		//�ߺ� ���ϱ� ���� ������ ���� �ٲ��� �ʾ��� ���� ���� �ٲ۴�
		if (al[m] == -1) {
			al[m] = i;
		}
	}

	for (int i = 0;i<26;i++) {
		cout << al[i] << " ";
	}
}