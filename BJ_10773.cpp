//BJ 10773번-진영인(제로)
#include <iostream>

using namespace std;

int main(void)
{
	// 정수 입력받기
	int n = 0;
	int* arr = NULL;
	int index = 0;
	int sum = 0;

	cin >> n;

	// 정수만큼 배열 동적 할당
	arr = new int[n];

	// 정수 만큼 배열 돌면서 입력받가 
	for (int i = 0;i < n;i++) {
		cin >> arr[index];
		if (arr[index] != 0) {
			sum += arr[index];
			index++;
		}

		else {
			index--;
			sum -= arr[index];
		}
	}

	cout << sum << endl;

	return 0;
}