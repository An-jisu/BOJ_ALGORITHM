#include <iostream>

using namespace std;

int main(void)
{
	while (1) {
		// �ڿ��� �Է¹ޱ�
		cout << "�ڿ����� �Է��Ͻÿ� (0�� �Է��ϸ� ����): ";
		int n = 0;   // ���� ���� �� �ʱ�ȭ
		cin >> n;

		// �������� �����ϱ� (0�̸� �ݺ��� ����������)
		if (n == 0) {
			cout << "���α׷��� �����մϴ�." << endl << endl;
			break;
		}

		// ���� ���� �� �ʱ�ȭ
		int gop_n = n;

		// �� �ڸ����� ���� ���� �����ϰ� ����ϱ�
		cout << gop_n << " ";
		while (1) {
			if (gop_n / 10 == 0) { // �� �ڸ����̸� ����
				cout << endl;
				break;
			}

			// �� �ڸ����� �� ���ϱ� (�� �ڸ��� �и��Ͽ�)
			int gop = 1; // �� �ڸ� ���� ��
			while (gop_n != 0) {
				gop *= (gop_n % 10);
				gop_n = gop_n / 10;
			}
			gop_n = gop;
			cout << gop << " ";
		}

	}

	return 0;
}
