#include <iostream>
#include <queue>
#include <map>
using namespace std;

int main() {
	int test;
	cin >> test;

	while (test--) {

		//각각 최대힙과 최소힙
		priority_queue<int, vector<int>, greater<int>> min_heap;
		priority_queue<int> max_heap;

		//삭제된 인덱스 저장
		map<int,int> del_idx;

		// 입력 데이터의 수
		int input;
		cin >> input;

		for (int i = 0; i < input; i++) {
			// 한줄 데이터 입력받기
			char c;
			int check_num;
			cin >> c >> check_num;

			//삽입연산일 때
			if (c == 'I') {
				//최대힙 최소힙 둘다 값저장
				max_heap.push(check_num);
				min_heap.push(check_num);

				//삭제 체크 map에 값 업데이트
				if (del_idx.count(check_num) == 0) {
					del_idx[check_num] = 1;
				}
				else
					del_idx[check_num]++;
			}

			//삭제연산일 때
			else if (c == 'D') {


				// 최대값을 삭제하는 연산일 때
				if (check_num == 1) {
					while (!max_heap.empty()&& del_idx[max_heap.top()]==0) {
						max_heap.pop();
					}
					if (!max_heap.empty()) {
						del_idx[max_heap.top()]--;
						max_heap.pop();
					}
					
				}
				// 최소값을 삭제하는 연산일 때
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