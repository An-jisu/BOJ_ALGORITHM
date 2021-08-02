// BJ 1019번 --> 시간 초과 문제 발생
#include <iostream>

using namespace std;

int main(void)
{
	// 전체 페이지 수 입력받기
	int page = 0; // 변수 선언 및 초기화
	cin >> page;

	// 배열 선언하기 (0~9 각 횟수 저장)
	int arr[10] = { 0 };

	// 각 횟수 저장 
	for (int i = 1;i <= page;i++) {
		while (i != 0) {
			arr[(i % 10)]++;
			i = i / 10;
		}
	}

	// 출력하기
	for (int i = 0;i < 10;i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}