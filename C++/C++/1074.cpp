#include <iostream>
#include<cmath>
using namespace std;

int main() {

	//n = 3
	int n;
	cin >> n;
	int r, c;
	cin >> r >> c;

	int start_width = 0;
	int start_height = 0;
	int end_width = pow(2, n) -1; //7
	int end_height = max_width;

	int current_width = end_width - start_width;
	int current_height = end_height - start_height;

	int sector = 1;

	int check_width = current_width / 2 + start_width; //3
	int check_height = current_height / 2 + start_height; //3

	if (c > check_width ){
		sector = 2;
		start_width = check_width + 1; //4
		if (r > check_height) {
			sector = 4;
			start_height = check_height + 1; //4
		}
	}
	else {
		sector = 1;
		end_width = check_width; //3
		if (r > current_height)
			sector = 1;
	}
		


}