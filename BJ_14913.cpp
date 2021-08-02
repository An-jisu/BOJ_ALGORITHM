#include <iostream>

using namespace std;

int main(void)
{
	// 첫 항, 공차, 찾는 수 입력받기
	int a, d, k;
	cout << "첫 항, 공차, 찾는 수를 공백으로 분리하여 입력: ";
	cin >> a >> d >> k;

	// 항(n)을 구하는 식 세우기
	double n;
	n = (double)(k - a) / d + 1;

	// n의 값이 정수이면(등차수열의 수임) n값 출력
	if ((n - (int)n) == 0) {
		cout << (int)n << endl;
	}

	else {
		cout << "X" << endl;
	}

	return 0;
}