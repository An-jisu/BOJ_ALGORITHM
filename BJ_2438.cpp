#include <iostream>

using namespace std;

int main(void)
{
	// �� �� �Է¹ޱ�
	int n = 0;  // ���� ���� �� �ʱ�ȭ
	cout << "�� ��: ";
	cin >> n;

	// �� ����ϱ�
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= i;j++) {
			cout << "*";
		}
		cout << endl;  // ���� �ٷ� �̵�
	}

	cout << endl;   // ������ ����

	return 0;
}