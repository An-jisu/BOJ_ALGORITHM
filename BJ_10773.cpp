//BJ 10773��-������(����)
#include <iostream>

using namespace std;

int main(void)
{
	// ���� �Է¹ޱ�
	int n = 0;
	int* arr = NULL;
	int index = 0;
	int sum = 0;

	cin >> n;

	// ������ŭ �迭 ���� �Ҵ�
	arr = new int[n];

	// ���� ��ŭ �迭 ���鼭 �Է¹ް� 
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