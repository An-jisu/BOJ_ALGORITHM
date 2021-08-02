#include <iostream>

using namespace std;

int main(void)
{
	// 줄 수 입력받기
	int n = 0;  // 줄 수 입력받기 위한 변수 선언
	cout << "줄 수: ";
	cin >> n;
	cin.ignore();

	int WORDS = n, LEN = 50;

	// 포인터 배열 동적 할당
	char **arr_str = new char*[WORDS];

	// for 문 통해서 줄 수 만큼 입력받기
	for (int i = 0;i < n;i++) {
		arr_str[i] = new char[LEN];
		cin.getline(arr_str[i], 50);
	}

	// for 문 통해서 출력하기
	for (int i = 0;i < n;i++) {
		cout << i + 1 << ". " << arr_str[i] << endl;
	}

	cout << endl;   // 마지막 개행

					// 동적할당받은 메모리주소 해제
	for (int i = 0;i < n;i++) {
		delete arr_str[i];
	}

	return 0;
}