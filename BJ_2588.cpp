#include <iostream>

using namespace std;

int main(void)
{
	// �� �ڸ� �ڿ��� �Է¹ޱ�
	int a = 0, b = 0;
	cout << "ù�� ° ��: ";
	cin >> a;

	cout << "�ι� ° ��: ";
	cin >> b;

	// �� �� ��� �� ���
	int x = 0, y = 0, z = 0;
	x = a*(b % 10);
	cout << x << endl;  // 3��

	y = a*((b % 100) / 10);
	cout << y << endl;

	z = a*(b / 100);
	cout << z << endl;

	// �ᱣ�� ���
	cout << a*b << endl << endl;

	return 0;
}