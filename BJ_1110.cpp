#include <iostream>

using namespace std;

int main(void)
{
	while (1) {
		// ���� �Է¹ޱ�
		int n = 0;   // ���� ���� �� �ʱ�ȭ
		cout << "0���� ũ�ų� ����, 99���� �۰ų� ���� ���� �Է�(����� -1): ";
		cin >> n; 

		// �������� �����ϱ�
		if (n == -1) {
			cout << "���α׷��� �����մϴ�." << endl << endl;
			break;
		}

		int count = 0;
		// right: ������ ��, hap_right: ��, �����ڸ� ���� �������ڸ���, result: �������ڸ����� ���� ������ �ڸ� �� ������ ����
		int right = 0, hap_right = 0, result = n;

		while (1) {    // ���� ���� ���ƿ� ������ count�ϴ� �ݺ���
			right = result % 10;
			hap_right = (result / 10 + right) % 10;
			result = right * 10 + hap_right;
			count++;   // ����Ŭ Ƚ�� ������Ű��

			// ���� ����
			if (result == n) {
				break;
			}
		}

		// ���� �ݺ��� �������ͼ� ����Ŭ �� ���
		cout << "����Ŭ ��: " << count << endl; 
	}

	return 0;
}