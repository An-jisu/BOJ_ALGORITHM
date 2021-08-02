#include <iostream>

using namespace std;

int main(void)
{
	// 자연수 n 입력받기
	int n;
	cin >> n;

	// for 문 이용해서 출력하기
	for (int i = n;i >= 1;i--) {
		cout << i << endl;
	}

	cout << endl;

	return 0;
}