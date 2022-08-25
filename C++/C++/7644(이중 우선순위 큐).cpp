#include <iostream>
#include <queue>
#include <map>
using namespace std;

int main() {
	int test;
	cin >> test;

	while (test--) {

		//���� �ִ����� �ּ���
		priority_queue<int, vector<int>, greater<int>> min_heap;
		priority_queue<int> max_heap;

		//������ �ε��� ����
		map<int,int> del_idx;

		// �Է� �������� ��
		int input;
		cin >> input;

		for (int i = 0; i < input; i++) {
			// ���� ������ �Է¹ޱ�
			char c;
			int check_num;
			cin >> c >> check_num;

			//���Կ����� ��
			if (c == 'I') {
				//�ִ��� �ּ��� �Ѵ� ������
				max_heap.push(check_num);
				min_heap.push(check_num);

				//���� üũ map�� �� ������Ʈ
				if (del_idx.count(check_num) == 0) {
					del_idx[check_num] = 1;
				}
				else
					del_idx[check_num]++;
			}

			//���������� ��
			else if (c == 'D') {


				// �ִ밪�� �����ϴ� ������ ��
				if (check_num == 1) {
					while (!max_heap.empty()&& del_idx[max_heap.top()]==0) {
						max_heap.pop();
					}
					if (!max_heap.empty()) {
						del_idx[max_heap.top()]--;
						max_heap.pop();
					}
					
				}
				// �ּҰ��� �����ϴ� ������ ��
				else {
					while (!min_heap.empty() && del_idx[min_heap.top()] == 0) {
						min_heap.pop();
					}
					if (!min_heap.empty()) {
						del_idx[min_heap.top()]--;
						min_heap.pop();
					}
				}

				
			}
		}
		while (!max_heap.empty() && del_idx[max_heap.top()] == 0) {
			max_heap.pop();
		}
		while (!min_heap.empty() && del_idx[min_heap.top()] == 0) {
			min_heap.pop();
		}

		if (min_heap.empty()) {
			cout << "EMPTY";
		}
		else
			cout << max_heap.top() << ' ' << min_heap.top();

		cout << '\n';
	}
}