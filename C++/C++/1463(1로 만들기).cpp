#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> list(1000000 , 0);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	//목표수 입력받기
	int num;
	cin >> num;

	//2부터 num 인덱스까지
	for (int i = 2;i <= num;i++) {

		//해당 인덱스에 -1한 수를 1로 만드는 최소횟수에 1번 더한다
		list[i] = list[i - 1] + 1;

		//만약 3으로 나누어지는 수라면 3으로 나눈 수를 1로 만들 수 있는 최소 회수에 1을 더한 수와 비교
		if (i % 3 == 0)
			list[i] = min(list[i], list[i / 3]+1);
		//만약 2으로 나누어지는 수라면 3으로 나눈 수를 1로 만들 수 있는 최소 회수에 1을 더한 수와 비교
		if(i%2==0)
			list[i] = min(list[i], list[i / 2]+1);
	}

	//해당 수의 횟수 출력
	cout << list[num];
}