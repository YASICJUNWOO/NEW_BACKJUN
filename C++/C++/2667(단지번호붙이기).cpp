#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

//좌표를 저장하는 map 생성
vector<vector <int>> map(27, vector<int>(27, -2));

//단지내 첫 가구가 될 수 있는 좌표들의 모임인 one 생성
queue<pair<int,int>> one;

//각 단지의 가구 수 저장하는 danzi 생성
vector<int> danzi;

//상하좌우 체크를 위한 배열
int moveX[4] = { -1, 1, 0, 0 };
int moveY[4] = { 0, 0, 1, -1 };

//단지내 가구 수를 측정
void work(int x, int y) {

	//단지 내 가구 수 1부터 증가
	int cnt = 1;

	//주변 탐색하여 1이면 저장할 q
	queue<pair<int, int>> q;

	//첫 가구의 좌표 삽입
	q.push(make_pair(x, y));

	map[x][y] = 0;

	while (!q.empty()) {

		//좌표 x, y에 대입
		int x = q.front().first;
		int y = q.front().second;

		//주변 탐색
		for (int i = 0;i < 4;i++) {
			int changeX = x + moveX[i];
			int changeY = y + moveY[i];

			//1이면 0으로 업데이트해주고 가구 수 증가, q에 삽입
			if (map[changeX][changeY] == 1) {
				cnt++;
				map[changeX][changeY] = 0;
				q.push(make_pair(changeX, changeY));
			}
		}

		q.pop();
	}

	//danzi에 해당 단지내 집 수 삽입
	danzi.push_back(cnt);
}


//one안에 저장된 좌표 1인지 체크하는 함수
void check() {

	//모든 원소 탐색
	while (!one.empty()) {
		
		//좌표값 각각 x , y에 저장
		int x = one.front().first;
		int y = one.front().second;

		//좌표 삭제
		one.pop();

		//만약 좌표값이 1이면 단지 탐색
		if (map[x][y] == 1) {
			work(x, y);
		}
	}

}


int main() {
	//지도의 크기
	int size;
	cin >> size;

	//지도
	string str;

	//지도 한 줄씩 입력받고 map에 저장하기
	for(int i=1;i<=size;i++){
		cin >> str;

		for (int j = 1;j <= size;j++) {
			map[i][j] = str[j - 1] - '0';

			//만약 1이라면 one에 좌표삽입
			if (map[i][j] == 1) {
				one.push(make_pair(i, j));
			}
		}
	}

	check();

	//오름차순 정렬
	sort(danzi.begin(), danzi.end());

	//단지 정보 출력
	cout << danzi.size()<<'\n';
	for (int i = 0;i < danzi.size();i++)
		cout << danzi[i] << '\n';
}