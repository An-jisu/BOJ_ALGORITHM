#include <iostream>

using namespace std;

int main(void)
{
	// �� �� �Է¹ޱ�
	int n = 0;  // �� �� �Է¹ޱ� ���� ���� ����
	cout << "�� ��: ";
	cin >> n;
	cin.ignore();

	int WORDS = n, LEN = 50;

	// ������ �迭 ���� �Ҵ�
	char **arr_str = new char*[WORDS];

	// for �� ���ؼ� �� �� ��ŭ �Է¹ޱ�
	for (int i = 0;i < n;i++) {
		arr_str[i] = new char[LEN];
		cin.getline(arr_str[i], 50);
	}

	// for �� ���ؼ� ����ϱ�
	for (int i = 0;i < n;i++) {
		cout << i + 1 << ". " << arr_str[i] << endl;
	}

	cout << endl;   // ������ ����

					// �����Ҵ���� �޸��ּ� ����
	for (int i = 0;i < n;i++) {
		delete arr_str[i];
	}

	return 0;
}