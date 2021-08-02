#include <iostream>

using namespace std;

int main(void)
{
	while (1) {
		// 자연수 입력받기
		cout << "자연수를 입력하시오 (0을 입력하면 종료): ";
		int n = 0;   // 변수 선언 및 초기화
		cin >> n;

		// 종료조건 생성하기 (0이면 반복문 빠져나오기)
		if (n == 0) {
			cout << "프로그램을 종료합니다." << endl << endl;
			break;
		}

		// 변수 선언 및 초기화
		int gop_n = n;

		// 각 자리수를 곱한 값을 저장하고 출력하기
		cout << gop_n << " ";
		while (1) {
			if (gop_n / 10 == 0) { // 한 자리수이면 종료
				cout << endl;
				break;
			}

			// 각 자리수의 곱 구하기 (각 자리수 분리하여)
			int gop = 1; // 각 자리 수의 곱
			while (gop_n != 0) {
				gop *= (gop_n % 10);
				gop_n = gop_n / 10;
			}
			gop_n = gop;
			cout << gop << " ";
		}

	}

	return 0;
}
