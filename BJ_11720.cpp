#include <iostream>

using namespace std;

int main(void)
{
	// ������ ���� �Է¹ޱ�
	int x;
	cout << "���ڰ��� �Է��Ͻÿ�: ";
	cin >> x;

	// ������� ���� �Է¹ޱ�
	int num;
	cin >> num;

	// �� ���ϱ�
	int hap = 0, count = 0;
	while (num != 0) {    // ���� �и��Ͽ� hap�� �����ϱ�
		hap += (num % 10);
		num /= 10;
		count++;
	}

	if (count == x) {
		// ����ϱ�
		cout << hap << endl << endl;
	}
	
	else {
		cout << "�Է� ������ �����ʽ��ϴ�." << endl;

	}

	return 0;
}