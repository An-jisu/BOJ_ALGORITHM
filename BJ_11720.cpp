#include <iostream>

using namespace std;

int main(void)
{
	// 숫자의 개수 입력받기
	int x;
	cout << "숫자갯수 입력하시오: ";
	cin >> x;

	// 공백없이 숫자 입력받기
	int num;
	cin >> num;

	// 합 구하기
	int hap = 0, count = 0;
	while (num != 0) {    // 숫자 분리하여 hap에 저장하기
		hap += (num % 10);
		num /= 10;
		count++;
	}

	if (count == x) {
		// 출력하기
		cout << hap << endl << endl;
	}
	
	else {
		cout << "입력 갯수가 맞지않습니다." << endl;

	}

	return 0;
}