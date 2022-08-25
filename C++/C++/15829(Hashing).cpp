#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    long long hashNum = 0;

    //���ĺ� ���̼�
    int len;
    cin >> len;

    //���� ����
    string str;
    cin >> str;

    //�� ���ڿ� �ش��ϴ� ���� ����
    vector<int> nums;
    for (int i = 0;i < len; i++) {
        nums.push_back(str[i] - 'a' + 1);
    }

    
    long long R = 1;

    for(int i=0;i<len;i++){
        //R���� nums �� ���ϰ� �������� hashNum�� ������
        hashNum = hashNum + (nums[i] * R) % 1234567891;
        //�ѹ� �� ������ �ش�
        hashNum %= 1234567891;

        //R�� 31�ٽ� �����ش�
        R = R * 31;
        //1234567891�� �������ش�
        R %= 1234567891;

    }

    cout << hashNum%1234567891;
}