#include <iostream>

using namespace std;

int main(void)
{
	// n�Է¹ޱ�
	int n;
	cin >> n;

	int arr[20];

	arr[0] = 0;
	arr[1] = 1;



	for (int i = 2;i <= n;i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	// ����ϱ�
	cout << arr[n] << endl;

	return 0;
}