#include <iostream>

using namespace std;

int main(void)
{
	// n입력받기
	int n;
	cin >> n;

	int arr[20];

	arr[0] = 0;
	arr[1] = 1;



	for (int i = 2;i <= n;i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	// 출력하기
	cout << arr[n] << endl;

	return 0;
}