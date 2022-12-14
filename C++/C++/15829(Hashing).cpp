#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    long long hashNum = 0;

    //알파벳 길이수
    int len;
    cin >> len;

    //문장 받음
    string str;
    cin >> str;

    //각 문자에 해당하는 수열 저장
    vector<int> nums;
    for (int i = 0;i < len; i++) {
        nums.push_back(str[i] - 'a' + 1);
    }

    
    long long R = 1;

    for(int i=0;i<len;i++){
        //R값과 nums 값 곱하고 나머지를 hashNum에 더해줌
        hashNum = hashNum + (nums[i] * R) % 1234567891;
        //한번 더 나누어 준다
        hashNum %= 1234567891;

        //R값 31다시 곱해준다
        R = R * 31;
        //1234567891로 나누어준다
        R %= 1234567891;

    }

    cout << hashNum%1234567891;
}