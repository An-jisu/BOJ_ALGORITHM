#include <iostream>

using namespace std;

int main(void)
{
	while (1) {
		// 정수 입력받기
		int n = 0;   // 변수 선언 및 초기화
		cout << "0보다 크거나 같고, 99보다 작거나 같은 정수 입력(종료는 -1): ";
		cin >> n; 

		// 종료조건 생성하기
		if (n == -1) {
			cout << "프로그램을 종료합니다." << endl << endl;
			break;
		}

		int count = 0;
		// right: 오른쪽 수, hap_right: 십, 일의자리 합의 오른쪽자리수, result: 오른쪽자리수와 합의 오른쪽 자리 수 연결한 숫자
		int right = 0, hap_right = 0, result = n;

		while (1) {    // 원래 수로 돌아올 때까지 count하는 반복문
			right = result % 10;
			hap_right = (result / 10 + right) % 10;
			result = right * 10 + hap_right;
			count++;   // 사이클 횟수 증가시키기

			// 종료 조건
			if (result == n) {
				break;
			}
		}

		// 안쪽 반복문 빠져나와서 사이클 수 출력
		cout << "사이클 수: " << count << endl; 
	}

	return 0;
}