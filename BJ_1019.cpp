// BJ 1019�� --> �ð� �ʰ� ���� �߻�
#include <iostream>

using namespace std;

int main(void)
{
	// ��ü ������ �� �Է¹ޱ�
	int page = 0; // ���� ���� �� �ʱ�ȭ
	cin >> page;

	// �迭 �����ϱ� (0~9 �� Ƚ�� ����)
	int arr[10] = { 0 };

	// �� Ƚ�� ���� 
	for (int i = 1;i <= page;i++) {
		while (i != 0) {
			arr[(i % 10)]++;
			i = i / 10;
		}
	}

	// ����ϱ�
	for (int i = 0;i < 10;i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}