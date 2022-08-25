﻿#include <iostream>
using namespace std;

int main() {

	int Hour, Min, Sec;
	int time;

	//시간, 분, 초 입력받음
	cin >> Hour >> Min >> Sec;

	//걸리는 시간은 초단위
	cin >> time;

	// 걸리는 시간/60은 분단위에 추가
	Min+=time / 60;

	//분단위에 추가된 시간 제외 나머지는 초에 추가
	Sec += time % 60;
	

	//더해진 시간이 60범위 넘으면 윗단위 올려주기 & 단위시간 삭제
	while(Sec>=60){
		Sec -= 60;
		Min++;
	}

	while (Min >= 60) {
		Min -= 60;
		Hour++;
	}

	while (Hour >= 24) {
		Hour -= 24;
	}

	printf("%d %d %d", Hour, Min, Sec);
}