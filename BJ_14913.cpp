#include <iostream>

using namespace std;

int main(void)
{
	// ù ��, ����, ã�� �� �Է¹ޱ�
	int a, d, k;
	cout << "ù ��, ����, ã�� ���� �������� �и��Ͽ� �Է�: ";
	cin >> a >> d >> k;

	// ��(n)�� ���ϴ� �� �����
	double n;
	n = (double)(k - a) / d + 1;

	// n�� ���� �����̸�(���������� ����) n�� ���
	if ((n - (int)n) == 0) {
		cout << (int)n << endl;
	}

	else {
		cout << "X" << endl;
	}

	return 0;
}