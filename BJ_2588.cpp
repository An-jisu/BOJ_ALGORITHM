#include <iostream>

using namespace std;

int main(void)
{
	// 세 자리 자연수 입력받기
	int a = 0, b = 0;
	cout << "첫번 째 수: ";
	cin >> a;

	cout << "두번 째 수: ";
	cin >> b;

	// 각 줄 계산 및 출력
	int x = 0, y = 0, z = 0;
	x = a*(b % 10);
	cout << x << endl;  // 3번

	y = a*((b % 100) / 10);
	cout << y << endl;

	z = a*(b / 100);
	cout << z << endl;

	// 결괏값 출력
	cout << a*b << endl << endl;

	return 0;
}