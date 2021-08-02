#include <iostream>

using namespace std;

int main(void)
{
	// 줄 수 입력받기
	int n = 0;  // 변수 선언 및 초기화
	cout << "줄 수: ";
	cin >> n;

	// 별 출력하기
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= i;j++) {
			cout << "*";
		}
		cout << endl;  // 다음 줄로 이동
	}

	cout << endl;   // 마지막 개행

	return 0;
}