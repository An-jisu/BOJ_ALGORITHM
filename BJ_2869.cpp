#include <iostream>

using namespace std;

int main(void)
{
	// A, B, V �Է¹ޱ� 
	int A, B, V;
	cout << "�������� �и��Ͽ� A,B,V�Է��Ͻÿ�: ";
	cin >> A >> B >> V;

	// �����̰� �ö� ���� ����, �� ��  �����ϱ�(height)
	int height = 0, day = 0;
	while (V > height) { // �����̰� �� �ö��� �������� �ݺ��� �ݺ�
		if (height + A >= V) {
			height = height + A; // ���� �ö� �� �̲������� ����.
			day++;
			break;
		}

		else {
			height = height + A - B;
			day++;
		}
	}

	// �� �� ����ϱ�
	cout << day << "���� �ɸ��ϴ�." << endl;

	return 0;
}