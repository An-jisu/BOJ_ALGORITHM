#include <iostream>

using namespace std;

int main(void)
{
	// A, B, C�� �Է¹ޱ�
	int A = 0, B = 0, C = 0;   // ���� ���� �� �ʱ�ȭ
	cout << "A, B, C�� �������� �и��Ͽ� �Է�: ";
	cin >> A >> B >> C;

	// '(A+B)%C' ����Ͽ� ���
	cout << "(A+B)%C: " << (A + B) % C << endl;

	// '((A%C) + (B%C))%C' ����Ͽ� ���
	cout << "((A%C) + (B%C))%C: " << ((A%C) + (B%C)) % C << endl;

	// '(A��B)%C' ����Ͽ� ���
	cout << "(A��B)%C: " << (A*B) % C << endl;

	// '((A%C) �� (B%C))%C' ����Ͽ� ���
	cout << "((A%C) �� (B%C))%C: " << ((A%C) * (B%C)) % C << endl << endl;

	return 0;
}