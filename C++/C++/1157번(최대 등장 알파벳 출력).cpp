#include <iostream>
#include <string.h>
using namespace std;

int main() {
	//���ڿ�, ���ĺ� �迭
	string dan;
	int al[26] = { 0, };

	cin >> dan;

	//���ĺ� ����Ƚ�� �ҹ���, �빮�� ���о��� al�迭�� ����
	for (int i = 0;i < dan.length();i++) {
		if (dan[i] >= 65 && dan[i] <= 90) {
			al[dan[i] - 65]++;
		}
		else if (dan[i] >= 97 && dan[i] <= 122) {
			al[dan[i] - 97]++;
		}
	}

	int max = 0; //�ִ� Ƚ��
	int  m = 0;  //�ִ� Ƚ�� ���� �迭 ������ ����
	int cnt = 0;  // �ߺ� �Ǻ� ����


	for (int i = 0;i < 26;i++) {
		if (max > al[i]) {
			continue;
		}
		//max ���� al �迭 ��ȸ�ϸ鼭 �ִ밪�� �޴´�
		//�ִ밪�� �ϳ��� ��츦 ����� m������ �ִ밪�� �迭 ������ �̸� �޾Ƴ��´�
		else if (max < al[i]) {
			max = al[i];
			m = i;
		}
	}

	//�ִ밪�� �ٽ� �迭�� ��ȸ�ϸ鼭 �ߺ����� ������ cnt�� ������Ų��
	for (int i = 0;i < 26;i++) {
		if (al[i] == max) {
			cnt = cnt + 1;
		}
	}

	//cnt�� 1�̸� �ߺ��� ���ٴ� ���̰� �� �̻��̸� �ִ밪�� �ߺ��̶�� ���̴�.
	if (cnt > 1) {
		cout << "?";
	}

	//�빮�� �ƽ�Ű �ڵ尪�� ����ϱ� ���� �������� 65�� ���ؼ� ������ش�
	else if (cnt == 1) {
		cout << (char)(m + 65);
	}
	
}